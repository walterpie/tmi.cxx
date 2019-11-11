#include <dlfcn.h>
#include <node.h>
#include <node_object_wrap.h>
#include "../include/tmi_cxx.h"

namespace tmi_cxx {
    using namespace v8;
    
    void Start(const FunctionCallbackInfo<Value>& args) {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();

        auto client_obj = args[0]
            ->ToObject(context)
            .FromMaybe(Local<Object>());
        TmixxClient* client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);
        client->obj = client_obj;
        client->isolate = isolate;
        client->context = context;

        auto so_str = args[1]
            ->ToString(context)
            .FromMaybe(Local<String>());
        auto so_buf = new char[so_str->Utf8Length(isolate) + 1]();
        so_str->WriteUtf8(isolate, so_buf, so_str->Utf8Length(isolate));

        void* handle = dlopen(so_buf, RTLD_LAZY);

        void (*tmicxx_main)(TmiClient*) = (void (*)(TmiClient*)) dlsym(handle, "tmicxx_main");

        tmicxx_main((TmiClient*) client);
    }
    
    void Initialize(Local<Object> exports) {
        NODE_SET_METHOD(exports, "start", Start);
        TmixxClient::Init(exports);
        TmixxPromise::Init(exports);
    }
    
    NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize)
}
