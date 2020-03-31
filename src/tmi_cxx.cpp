#include <node.h>
#include <cmath>
#include "../include/tmi_cxx.h"

using namespace tmi_cxx;

extern "C" TmiPromise *tmi_connect(TmiClient *client, void *userdata) {
    return (TmiPromise *)((TmixxClient *) client)->connect(userdata);
}

extern "C" TmiPromise *tmi_disconnect(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->disconnect();
}

extern "C" void *tmi_userdata(TmiClient *client) {
    return ((TmixxClient *) client)->userdata();
}

extern "C" TmiPromise *tmi_promise_and_then(TmiPromise *promise, and_then_t and_then) {
    return (TmiPromise *)((TmixxPromise *) promise)->and_then(and_then);
}

extern "C" void tmi_promise_or_else(TmiPromise *promise, or_else_t or_else) {
    ((TmixxPromise *) promise)->or_else(or_else);
}

TmiPromise *tmi_client_action(TmiClient *client, const char *channel, const char *message) {
    return (TmiPromise *)((TmixxClient *) client)->action(channel, message);
}

TmiPromise *tmi_client_ban(TmiClient *client, const char *channel, const char *username, const char *reason /* optional */) {
    return (TmiPromise *)((TmixxClient *) client)->ban(channel, username, reason /* optional */);
}

TmiPromise *tmi_client_clear(TmiClient *client, const char *channel) {
    return (TmiPromise *)((TmixxClient *) client)->clear(channel);
}

TmiPromise *tmi_client_color(TmiClient *client, const char *color) {
    return (TmiPromise *)((TmixxClient *) client)->color(color);
}

TmiPromise *tmi_client_commercial(TmiClient *client, const char *channel, int seconds) {
    return (TmiPromise *)((TmixxClient *) client)->commercial(channel, seconds);
}

TmiPromise *tmi_client_deletemessage(TmiClient *client, const char *channel, const char *uuid) {
    return (TmiPromise *)((TmixxClient *) client)->deletemessage(channel, uuid);
}

TmiPromise *tmi_client_emoteonly(TmiClient *client, const char *channel) {
    return (TmiPromise *)((TmixxClient *) client)->emoteonly(channel);
}

TmiPromise *tmi_client_emoteonlyoff(TmiClient *client, const char *channel) {
    return (TmiPromise *)((TmixxClient *) client)->emoteonlyoff(channel);
}

TmiPromise *tmi_client_followersonly(TmiClient *client, const char *channel, int length /* optional */) {
    return (TmiPromise *)((TmixxClient *) client)->followersonly(channel, length /* optional */);
}

TmiPromise *tmi_client_followersonlyoff(TmiClient *client, const char *channel) {
    return (TmiPromise *)((TmixxClient *) client)->followersonlyoff(channel);
}

TmiPromise *tmi_client_host(TmiClient *client, const char *channel, const char *target) {
    return (TmiPromise *)((TmixxClient *) client)->host(channel, target);
}

TmiPromise *tmi_client_join(TmiClient *client, const char *channel) {
    return (TmiPromise *)((TmixxClient *) client)->join(channel);
}

TmiPromise *tmi_client_mod(TmiClient *client, const char *channel, const char *username) {
    return (TmiPromise *)((TmixxClient *) client)->mod(channel, username);
}

TmiPromise *tmi_client_mods(TmiClient *client, const char *mods) {
    return (TmiPromise *)((TmixxClient *) client)->mods(mods);
}

TmiPromise *tmi_client_part(TmiClient *client, const char *channel) {
    return (TmiPromise *)((TmixxClient *) client)->part(channel);
}

TmiPromise *tmi_client_ping(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->ping();
}

TmiPromise *tmi_client_r9kbeta(TmiClient *client, const char *channel) {
    return (TmiPromise *)((TmixxClient *) client)->r9kbeta(channel);
}

TmiPromise *tmi_client_r9kbetaoff(TmiClient *client, const char *channel) {
    return (TmiPromise *)((TmixxClient *) client)->r9kbetaoff(channel);
}

TmiPromise *tmi_client_raw(TmiClient *client, const char *msg) {
    return (TmiPromise *)((TmixxClient *) client)->raw(msg);
}

TmiPromise *tmi_client_say(TmiClient *client, const char *channel, const char *msg) {
    return (TmiPromise *)((TmixxClient *) client)->say(channel, msg);
}

TmiPromise *tmi_client_slow(TmiClient *client, const char *channel, int length /* optional */) {
    return (TmiPromise *)((TmixxClient *) client)->slow(channel, length /* optional */);
}

TmiPromise *tmi_client_slowoff(TmiClient *client, const char *channel) {
    return (TmiPromise *)((TmixxClient *) client)->slowoff(channel);
}

TmiPromise *tmi_client_subscribers(TmiClient *client, const char *channel) {
    return (TmiPromise *)((TmixxClient *) client)->subscribers(channel);
}

TmiPromise *tmi_client_subscribersoff(TmiClient *client, const char *channel) {
    return (TmiPromise *)((TmixxClient *) client)->subscribersoff(channel);
}

TmiPromise *tmi_client_timeout(TmiClient *client, const char *channel, const char *username, int length /* optional */, const char *reason /* optional */) {
    return (TmiPromise *)((TmixxClient *) client)->timeout(channel, username, length /* optional */, reason /* optional */);
}

TmiPromise *tmi_client_unban(TmiClient *client, const char *channel, const char *username) {
    return (TmiPromise *)((TmixxClient *) client)->unban(channel, username);
}

TmiPromise *tmi_client_unhost(TmiClient *client, const char *channel) {
    return (TmiPromise *)((TmixxClient *) client)->unhost(channel);
}

TmiPromise *tmi_client_unmod(TmiClient *client, const char *channel) {
    return (TmiPromise *)((TmixxClient *) client)->unmod(channel);
}

TmiPromise *tmi_client_unvip(TmiClient *client, const char *channel, const char *username) {
    return (TmiPromise *)((TmixxClient *) client)->unvip(channel, username);
}

TmiPromise *tmi_client_vip(TmiClient *client, const char *channel, const char *username) {
    return (TmiPromise *)((TmixxClient *) client)->vip(channel, username);
}

TmiPromise *tmi_client_vips(TmiClient *client, const char *channel) {
    return (TmiPromise *)((TmixxClient *) client)->vips(channel);
}

TmiPromise *tmi_client_whisper(TmiClient *client, const char *username, const char *msg) {
    return (TmiPromise *)((TmixxClient *) client)->whisper(username, msg);
}

extern "C" void tmi_on_action(TmiClient *client, on_action_t callback) {
    ((TmixxClient *) client)->on_action(callback);
}

extern "C" void tmi_on_anongiftpaidupgrade(TmiClient *client, on_anongiftpaidupgrade_t callback) {
    ((TmixxClient *) client)->on_anongiftpaidupgrade(callback);
}

extern "C" void tmi_on_ban(TmiClient *client, on_ban_t callback) {
    ((TmixxClient *) client)->on_ban(callback);
}

extern "C" void tmi_on_chat(TmiClient *client, on_chat_t callback) {
    ((TmixxClient *) client)->on_chat(callback);
}

extern "C" void tmi_on_cheer(TmiClient *client, on_cheer_t callback) {
    ((TmixxClient *) client)->on_cheer(callback);
}

extern "C" void tmi_on_clearchat(TmiClient *client, on_clearchat_t callback) {
    ((TmixxClient *) client)->on_clearchat(callback);
}

extern "C" void tmi_on_connected(TmiClient *client, on_connected_t callback) {
    ((TmixxClient *) client)->on_connected(callback);
}

extern "C" void tmi_on_connecting(TmiClient *client, on_connecting_t callback) {
    ((TmixxClient *) client)->on_connecting(callback);
}

extern "C" void tmi_on_disconnected(TmiClient *client, on_disconnected_t callback) {
    ((TmixxClient *) client)->on_disconnected(callback);
}

extern "C" void tmi_on_emoteonly(TmiClient *client, on_emoteonly_t callback) {
    ((TmixxClient *) client)->on_emoteonly(callback);
}

extern "C" void tmi_on_emotesets(TmiClient *client, on_emotesets_t callback) {
    ((TmixxClient *) client)->on_emotesets(callback);
}

extern "C" void tmi_on_followersonly(TmiClient *client, on_followersonly_t callback) {
    ((TmixxClient *) client)->on_followersonly(callback);
}

extern "C" void tmi_on_giftpaidupgrade(TmiClient *client, on_giftpaidupgrade_t callback) {
    ((TmixxClient *) client)->on_giftpaidupgrade(callback);
}

extern "C" void tmi_on_hosted(TmiClient *client, on_hosted_t callback) {
    ((TmixxClient *) client)->on_hosted(callback);
}

extern "C" void tmi_on_hosting(TmiClient *client, on_hosting_t callback) {
    ((TmixxClient *) client)->on_hosting(callback);
}

extern "C" void tmi_on_join(TmiClient *client, on_join_t callback) {
    ((TmixxClient *) client)->on_join(callback);
}

extern "C" void tmi_on_logon(TmiClient *client, on_logon_t callback) {
    ((TmixxClient *) client)->on_logon(callback);
}

extern "C" void tmi_on_message(TmiClient *client, on_message_t callback) {
    ((TmixxClient *) client)->on_message(callback);
}

extern "C" void tmi_on_messagedeleted(TmiClient *client, on_messagedeleted_t callback) {
    ((TmixxClient *) client)->on_messagedeleted(callback);
}

extern "C" void tmi_on_mod(TmiClient *client, on_mod_t callback) {
    ((TmixxClient *) client)->on_mod(callback);
}

extern "C" void tmi_on_mods(TmiClient *client, on_mods_t callback) {
    ((TmixxClient *) client)->on_mods(callback);
}

extern "C" void tmi_on_notice(TmiClient *client, on_notice_t callback) {
    ((TmixxClient *) client)->on_notice(callback);
}

extern "C" void tmi_on_part(TmiClient *client, on_part_t callback) {
    ((TmixxClient *) client)->on_part(callback);
}

extern "C" void tmi_on_ping(TmiClient *client, on_ping_t callback) {
    ((TmixxClient *) client)->on_ping(callback);
}

extern "C" void tmi_on_pong(TmiClient *client, on_pong_t callback) {
    ((TmixxClient *) client)->on_pong(callback);
}

extern "C" void tmi_on_r9kbeta(TmiClient *client, on_r9kbeta_t callback) {
    ((TmixxClient *) client)->on_r9kbeta(callback);
}

extern "C" void tmi_on_raided(TmiClient *client, on_raided_t callback) {
    ((TmixxClient *) client)->on_raided(callback);
}

extern "C" void tmi_on_raw_message(TmiClient *client, on_raw_message_t callback) {
    ((TmixxClient *) client)->on_raw_message(callback);
}

extern "C" void tmi_on_reconnect(TmiClient *client, on_reconnect_t callback) {
    ((TmixxClient *) client)->on_reconnect(callback);
}

extern "C" void tmi_on_resub(TmiClient *client, on_resub_t callback) {
    ((TmixxClient *) client)->on_resub(callback);
}

extern "C" void tmi_on_roomstate(TmiClient *client, on_roomstate_t callback) {
    ((TmixxClient *) client)->on_roomstate(callback);
}

extern "C" void tmi_on_serverchange(TmiClient *client, on_serverchange_t callback) {
    ((TmixxClient *) client)->on_serverchange(callback);
}

extern "C" void tmi_on_slowmode(TmiClient *client, on_slowmode_t callback) {
    ((TmixxClient *) client)->on_slowmode(callback);
}

extern "C" void tmi_on_subgift(TmiClient *client, on_subgift_t callback) {
    ((TmixxClient *) client)->on_subgift(callback);
}

extern "C" void tmi_on_submysterygift(TmiClient *client, on_submysterygift_t callback) {
    ((TmixxClient *) client)->on_submysterygift(callback);
}

extern "C" void tmi_on_subscribers(TmiClient *client, on_subscribers_t callback) {
    ((TmixxClient *) client)->on_subscribers(callback);
}

extern "C" void tmi_on_subscription(TmiClient *client, on_subscription_t callback) {
    ((TmixxClient *) client)->on_subscription(callback);
}

extern "C" void tmi_on_timeout(TmiClient *client, on_timeout_t callback) {
    ((TmixxClient *) client)->on_timeout(callback);
}

extern "C" void tmi_on_unhost(TmiClient *client, on_unhost_t callback) {
    ((TmixxClient *) client)->on_unhost(callback);
}

extern "C" void tmi_on_unmod(TmiClient *client, on_unmod_t callback) {
    ((TmixxClient *) client)->on_unmod(callback);
}

extern "C" void tmi_on_vips(TmiClient *client, on_vips_t callback) {
    ((TmixxClient *) client)->on_vips(callback);
}

extern "C" void tmi_on_whisper(TmiClient *client, on_whisper_t callback) {
    ((TmixxClient *) client)->on_whisper(callback);
}

extern "C" void tmi_del_object(TmiObject *object) {
    delete (TmixxObject *) object;
}

extern "C" TmiObject *tmi_object_get_properties(TmiObject *object) {
    return (TmiObject *) ((TmixxObject *) object)->get_properties();
}

extern "C" int tmi_object_is_object(TmiObject *object) {
    return (int) ((TmixxObject *) object)->is_object();
}

extern "C" int tmi_object_is_number(TmiObject *object) {
    return (int) ((TmixxObject *) object)->is_number();
}

extern "C" int tmi_object_is_bool(TmiObject *object) {
    return (int) ((TmixxObject *) object)->is_bool();
}

extern "C" int tmi_object_is_array(TmiObject *object) {
    return (int) ((TmixxObject *) object)->is_array();
}

extern "C" int tmi_object_is_string(TmiObject *object) {
    return (int) ((TmixxObject *) object)->is_string();
}

extern "C" TmiObject *tmi_object_to_object(TmiObject *object) {
    return (TmiObject *) ((TmixxObject *) object)->to_object();
}

extern "C" double tmi_object_to_number(TmiObject *object) {
    return ((TmixxObject *) object)->to_number();
}

extern "C" int tmi_object_to_bool(TmiObject *object) {
    return (int) ((TmixxObject *) object)->to_bool();
}

extern "C" TmiObject *tmi_object_to_array(TmiObject *object) {
    return (TmiObject *) ((TmixxObject *) object)->to_array();
}

extern "C" const char *tmi_object_to_string(TmiObject *object) {
    return (const char *) ((TmixxObject *) object)->to_string();
}

extern "C" TmiObject *tmi_object_index(TmiObject *object, size_t idx) {
    return (TmiObject *) (*(TmixxObject *) object)[idx];
}

extern "C" TmiObject *tmi_object_get(TmiObject *object, const char *str) {
    return (TmiObject *) (*(TmixxObject *) object)[str];
}

Persistent<Function> TmixxPromise::constructor;

TmixxPromise::TmixxPromise(TmixxClient* _client, Isolate* _isolate, Local<Context> _context, Persistent<Object, CopyablePersistentTraits<Object>> _promise) :
    client(_client),
    promise(_promise),
    isolate(_isolate),
    context(_context)
{ }

TmixxPromise::~TmixxPromise() {}

void TmixxPromise::Init(Local<Object> exports) {
    Isolate* isolate = exports->GetIsolate();

    // Prepare constructor template
    Local<FunctionTemplate> tpl = FunctionTemplate::New(isolate, TmixxPromise::New);
    tpl->SetClassName(String::NewFromUtf8(
        isolate, "TmixxPromise", NewStringType::kNormal).ToLocalChecked());
    tpl->InstanceTemplate()->SetInternalFieldCount(1);

    Local<Context> context = isolate->GetCurrentContext();
    constructor.Reset(isolate, tpl->GetFunction(context).ToLocalChecked());
    exports->Set(context, String::NewFromUtf8(
        isolate, "TmixxPromise", NewStringType::kNormal).ToLocalChecked(),
                 tpl->GetFunction(context).ToLocalChecked()).FromJust();
}

void TmixxPromise::New(const FunctionCallbackInfo<Value>& args) {
    if (args.IsConstructCall()) {
        // Invoked as constructor: `new TmixxPromise(...)`
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args[0]->ToObject(context).ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);
        auto promise = args[1]->ToObject(context).ToLocalChecked();
        TmixxPromise* obj = new TmixxPromise(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
        obj->Wrap(args.This());
        args.GetReturnValue().Set(args.This());
    } else {
        // TODO: throw exception
    }
}

TmixxPromise *TmixxPromise::and_then(and_then_t callback) {
    this->cb_and_then = callback;
    auto promise_obj = this->obj;
    auto promise_value = Local<Value>(promise_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto promise_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto promise = node::ObjectWrap::Unwrap<TmixxPromise>(promise_obj);

        auto obj_obj = args[0]->ToObject(context).ToLocalChecked();
        auto obj = new TmixxObject(promise->client, promise->isolate, promise->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, obj_obj));

        auto result = (TmixxPromise*) promise->cb_and_then((TmiClient*) promise->client, (TmiObject*) obj);
        args.GetReturnValue().Set(result->promise.Get(isolate));
    }, promise_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto on = String::NewFromUtf8(this->isolate, "then", NewStringType::kNormal).ToLocalChecked();
    auto and_then_fn = this->promise
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {fn};
    auto promise = and_then_fn
        ->CallAsFunction(this->context, this->promise.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    auto result = new TmixxPromise(this->client, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
    delete this;
    return result;
}

void TmixxPromise::or_else(or_else_t callback) {
    this->cb_or_else = callback;
    auto promise_obj = this->obj;
    auto promise_value = Local<Value>(promise_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto promise_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto promise = node::ObjectWrap::Unwrap<TmixxPromise>(promise_obj);

        auto obj_obj = args[0]->ToObject(context).ToLocalChecked();
        auto obj = new TmixxObject(promise->client, promise->isolate, promise->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, obj_obj));

        promise->cb_or_else((TmiClient*) promise->client, (TmiObject*) obj);
    }, promise_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto on = String::NewFromUtf8(this->isolate, "catch", NewStringType::kNormal).ToLocalChecked();
    auto or_else_fn = this->promise
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {fn};
    or_else_fn->CallAsFunction(this->context, this->promise.Get(this->isolate), argc, argv).ToLocalChecked();

    delete this;
}

Persistent<Function> TmixxObject::constructor;

TmixxObject::TmixxObject(TmixxClient* _client, Isolate* _isolate, Local<Context> _context, Persistent<Object, CopyablePersistentTraits<Object>> _object) :
    client(_client),
    object(_object),
    isolate(_isolate),
    context(_context)
{ }

TmixxObject::~TmixxObject() {}

void TmixxObject::Init(Local<Object> exports) {
    Isolate* isolate = exports->GetIsolate();

    // Prepare constructor template
    Local<FunctionTemplate> tpl = FunctionTemplate::New(isolate, TmixxObject::New);
    tpl->SetClassName(String::NewFromUtf8(
        isolate, "TmixxObject", NewStringType::kNormal).ToLocalChecked());
    tpl->InstanceTemplate()->SetInternalFieldCount(1);

    Local<Context> context = isolate->GetCurrentContext();
    constructor.Reset(isolate, tpl->GetFunction(context).ToLocalChecked());
    exports->Set(context, String::NewFromUtf8(
        isolate, "TmixxObject", NewStringType::kNormal).ToLocalChecked(),
                 tpl->GetFunction(context).ToLocalChecked()).FromJust();
}

void TmixxObject::New(const FunctionCallbackInfo<Value>& args) {
    if (args.IsConstructCall()) {
        // Invoked as constructor: `new TmixxObject(...)`
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args[0]->ToObject(context).ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);
        auto object = args[1]->ToObject(context).ToLocalChecked();
        TmixxObject* obj = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, object));
        obj->Wrap(args.This());
        args.GetReturnValue().Set(args.This());
    } else {
        // TODO: throw exception
    }
}

TmixxObject* TmixxObject::get_properties() {
    auto object = this->object
        .Get(this->isolate)
        ->GetOwnPropertyNames(this->context)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxObject(this->client, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, object));
}

bool TmixxObject::is_object() {
    return this->object.Get(this->isolate)->IsObject();
}

bool TmixxObject::is_number() {
    return this->object.Get(this->isolate)->IsNumber();
}

bool TmixxObject::is_bool() {
    return this->object.Get(this->isolate)->IsBoolean();
}

bool TmixxObject::is_array() {
    return this->object.Get(this->isolate)->IsArray();
}

bool TmixxObject::is_string() {
    return this->object.Get(this->isolate)->IsString();
}

TmixxObject* TmixxObject::to_object() {
    return this;
}

double TmixxObject::to_number() {
    auto num = this->object.Get(this->isolate)->ToNumber(this->context).ToLocalChecked();
    return num->Value();
}

bool TmixxObject::to_bool() {
    auto boolean = this->object.Get(this->isolate)->ToBoolean(this->isolate);
    return boolean->Value();
}

TmixxObject* TmixxObject::to_array() {
    return this;
}

const char* TmixxObject::to_string() {
    auto str = this->object.Get(this->isolate)->ToString(this->context).ToLocalChecked();
    auto buf = new char[str->Utf8Length(isolate) + 1]();
    str->WriteUtf8(isolate, buf, str->Utf8Length(isolate));
    return buf;
}

TmixxObject* TmixxObject::operator [](size_t idx) {
    auto object = this->object
        .Get(this->isolate)
        ->Get(this->context, (int) idx)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxObject(this->client, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, object));
}

TmixxObject* TmixxObject::operator [](const char* str) {
    auto key = String::NewFromUtf8(this->isolate, str, NewStringType::kNormal).ToLocalChecked();
    auto field = this->object
        .Get(this->isolate)
        ->Get(this->context, key)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxObject(this->client, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, field));
}

Persistent<Function> TmixxClient::constructor;

TmixxClient::TmixxClient(Isolate* _isolate, Local<Context> _context, Persistent<Object, CopyablePersistentTraits<Object>> _client) :
    client(_client),
    isolate(_isolate),
    context(_context)
{ }

TmixxClient::~TmixxClient() {}

void TmixxClient::Init(Local<Object> exports) {
    Isolate* isolate = exports->GetIsolate();

    // Prepare constructor template
    Local<FunctionTemplate> tpl = FunctionTemplate::New(isolate, TmixxClient::New);
    tpl->SetClassName(String::NewFromUtf8(
        isolate, "TmixxClient", NewStringType::kNormal).ToLocalChecked());
    tpl->InstanceTemplate()->SetInternalFieldCount(1);

    Local<Context> context = isolate->GetCurrentContext();
    constructor.Reset(isolate, tpl->GetFunction(context).ToLocalChecked());
    exports->Set(context, String::NewFromUtf8(
        isolate, "TmixxClient", NewStringType::kNormal).ToLocalChecked(),
                 tpl->GetFunction(context).ToLocalChecked()).FromJust();
}

void TmixxClient::New(const FunctionCallbackInfo<Value>& args) {
    if (args.IsConstructCall()) {
        // Invoked as constructor: `new TmixxClient(...)`
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client = args[0]->ToObject(context).ToLocalChecked();
        TmixxClient* obj = new TmixxClient(isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, client));
        obj->Wrap(args.This());
        args.GetReturnValue().Set(args.This());
    } else {
        // TODO: throw exception
    }
}

TmixxPromise *TmixxClient::connect(void* userdata) {
    this->_userdata = userdata;

    auto client = this->client.Get(this->isolate);
    auto connect = String::NewFromUtf8(this->isolate, "connect", NewStringType::kNormal).ToLocalChecked();
    auto connect_fn = client
        ->Get(this->context, connect)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 0;
    Local<Value> argv[argc] = {};
    auto promise = connect_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::disconnect() {
    auto client = this->client.Get(this->isolate);
    auto disconnect = String::NewFromUtf8(this->isolate, "disconnect", NewStringType::kNormal).ToLocalChecked();
    auto disconnect_fn = client
        ->Get(this->context, disconnect)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 0;
    Local<Value> argv[argc] = {};
    auto promise = disconnect_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

void* TmixxClient::userdata() {
    return this->_userdata;
}

TmixxPromise* TmixxClient::action(const char* channel, const char* message) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto msg = String::NewFromUtf8(this->isolate, message, NewStringType::kNormal).ToLocalChecked();
    auto action = String::NewFromUtf8(this->isolate, "action", NewStringType::kNormal).ToLocalChecked();
    auto action_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, action)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {chan, msg};
    auto promise = action_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::ban(const char* channel, const char* username, const char* _reason /* optional */) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto user = String::NewFromUtf8(this->isolate, username, NewStringType::kNormal).ToLocalChecked();
    if (_reason) {
        auto reason = String::NewFromUtf8(this->isolate, _reason, NewStringType::kNormal).ToLocalChecked();
        auto ban = String::NewFromUtf8(this->isolate, "ban", NewStringType::kNormal).ToLocalChecked();
        auto ban_fn = this->client
            .Get(this->isolate)
            ->Get(this->context, ban)
            .ToLocalChecked()
            ->ToObject(this->context)
            .ToLocalChecked();

        const unsigned argc = 3;
        Local<Value> argv[argc] = {chan, user, reason};
        auto promise = ban_fn
            ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
            .ToLocalChecked()
            ->ToObject(this->context)
            .ToLocalChecked();
        return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
    } else {
        auto ban = String::NewFromUtf8(this->isolate, "ban", NewStringType::kNormal).ToLocalChecked();
        auto ban_fn = this->client
            .Get(this->isolate)
            ->Get(this->context, ban)
            .ToLocalChecked()
            ->ToObject(this->context)
            .ToLocalChecked();

        const unsigned argc = 2;
        Local<Value> argv[argc] = {chan, user};
        auto promise = ban_fn
            ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
            .ToLocalChecked()
            ->ToObject(this->context)
            .ToLocalChecked();
        return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
    }
}

TmixxPromise* TmixxClient::clear(const char* channel) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto clear = String::NewFromUtf8(this->isolate, "clear", NewStringType::kNormal).ToLocalChecked();
    auto clear_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, clear)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {chan};
    auto promise = clear_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::color(const char* _color) {
    auto col = String::NewFromUtf8(this->isolate, _color, NewStringType::kNormal).ToLocalChecked();
    auto color = String::NewFromUtf8(this->isolate, "color", NewStringType::kNormal).ToLocalChecked();
    auto color_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, color)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {col};
    auto promise = color_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::commercial(const char* channel, int seconds) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto secs = Number::New(this->isolate, seconds);
    auto commercial = String::NewFromUtf8(this->isolate, "commercial", NewStringType::kNormal).ToLocalChecked();
    auto commercial_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, commercial)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {chan, secs};
    auto promise = commercial_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::deletemessage(const char* channel, const char* _uuid) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto uuid = String::NewFromUtf8(this->isolate, _uuid, NewStringType::kNormal).ToLocalChecked();
    auto deletemessage = String::NewFromUtf8(this->isolate, "deletemessage", NewStringType::kNormal).ToLocalChecked();
    auto deletemessage_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, deletemessage)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {chan, uuid};
    auto promise = deletemessage_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::emoteonly(const char* channel) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto emoteonly = String::NewFromUtf8(this->isolate, "emoteonly", NewStringType::kNormal).ToLocalChecked();
    auto emoteonly_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, emoteonly)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {chan};
    auto promise = emoteonly_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::emoteonlyoff(const char* channel) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto emoteonlyoff = String::NewFromUtf8(this->isolate, "emoteonlyoff", NewStringType::kNormal).ToLocalChecked();
    auto emoteonlyoff_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, emoteonlyoff)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {chan};
    auto promise = emoteonlyoff_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::followersonly(const char* channel, int length /* optional */) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto len = Number::New(this->isolate, length);
    auto followersonly = String::NewFromUtf8(this->isolate, "followersonly", NewStringType::kNormal).ToLocalChecked();
    auto followersonly_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, followersonly)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {chan, len};
    auto promise = followersonly_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::followersonlyoff(const char* channel) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto followersonlyoff = String::NewFromUtf8(this->isolate, "followersonlyoff", NewStringType::kNormal).ToLocalChecked();
    auto followersonlyoff_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, followersonlyoff)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {chan};
    auto promise = followersonlyoff_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::host(const char* channel, const char* _target) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto target = String::NewFromUtf8(this->isolate, _target, NewStringType::kNormal).ToLocalChecked();
    auto host = String::NewFromUtf8(this->isolate, "host", NewStringType::kNormal).ToLocalChecked();
    auto host_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, host)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {chan, target};
    auto promise = host_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::join(const char* channel) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto join = String::NewFromUtf8(this->isolate, "join", NewStringType::kNormal).ToLocalChecked();
    auto join_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, join)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {chan};
    auto promise = join_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::mod(const char* channel, const char* username) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto user = String::NewFromUtf8(this->isolate, username, NewStringType::kNormal).ToLocalChecked();
    auto mod = String::NewFromUtf8(this->isolate, "mod", NewStringType::kNormal).ToLocalChecked();
    auto mod_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, mod)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {chan, user};
    auto promise = mod_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::mods(const char* channel) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto mods = String::NewFromUtf8(this->isolate, "mods", NewStringType::kNormal).ToLocalChecked();
    auto mods_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, mods)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {chan};
    auto promise = mods_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::part(const char* channel) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto part = String::NewFromUtf8(this->isolate, "part", NewStringType::kNormal).ToLocalChecked();
    auto part_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, part)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {chan};
    auto promise = part_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::ping() {
    auto ping = String::NewFromUtf8(this->isolate, "ping", NewStringType::kNormal).ToLocalChecked();
    auto ping_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, ping)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 0;
    Local<Value> argv[argc] = {};
    auto promise = ping_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::r9kbeta(const char* channel) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto r9kbeta = String::NewFromUtf8(this->isolate, "r9kbeta", NewStringType::kNormal).ToLocalChecked();
    auto r9kbeta_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, r9kbeta)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {chan};
    auto promise = r9kbeta_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::r9kbetaoff(const char* channel) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto r9kbetaoff = String::NewFromUtf8(this->isolate, "r9kbetaoff", NewStringType::kNormal).ToLocalChecked();
    auto r9kbetaoff_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, r9kbetaoff)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {chan};
    auto promise = r9kbetaoff_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::raw(const char* _msg) {
    auto msg = String::NewFromUtf8(this->isolate, _msg, NewStringType::kNormal).ToLocalChecked();
    auto raw = String::NewFromUtf8(this->isolate, "raw", NewStringType::kNormal).ToLocalChecked();
    auto raw_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, raw)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {msg};
    auto promise = raw_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise *TmixxClient::say(const char* channel, const char* message) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto msg = String::NewFromUtf8(this->isolate, message, NewStringType::kNormal).ToLocalChecked();
    auto say = String::NewFromUtf8(this->isolate, "say", NewStringType::kNormal).ToLocalChecked();
    auto say_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, say)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {chan, msg};
    auto promise = say_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::slow(const char* channel, int length /* optional */) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto len = Number::New(this->isolate, length);
    auto slow = String::NewFromUtf8(this->isolate, "slow", NewStringType::kNormal).ToLocalChecked();
    auto slow_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, slow)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {chan, len};
    auto promise = slow_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::slowoff(const char* channel) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto slowoff = String::NewFromUtf8(this->isolate, "slowoff", NewStringType::kNormal).ToLocalChecked();
    auto slowoff_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, slowoff)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {chan};
    auto promise = slowoff_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::subscribers(const char* channel) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto subscribers = String::NewFromUtf8(this->isolate, "subscribers", NewStringType::kNormal).ToLocalChecked();
    auto subscribers_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, subscribers)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {chan};
    auto promise = subscribers_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::subscribersoff(const char* channel) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto subscribersoff = String::NewFromUtf8(this->isolate, "subscribersoff", NewStringType::kNormal).ToLocalChecked();
    auto subscribersoff_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, subscribersoff)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {chan};
    auto promise = subscribersoff_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::timeout(const char* channel, const char* username, int length /* optional */, const char* _reason /* optional */) {
    if (length == -1) {
        length = 300;
    }
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto user = String::NewFromUtf8(this->isolate, username, NewStringType::kNormal).ToLocalChecked();
    auto len = Number::New(this->isolate, length);
    if (_reason) {
        auto reason = String::NewFromUtf8(this->isolate, _reason, NewStringType::kNormal).ToLocalChecked();
        auto timeout = String::NewFromUtf8(this->isolate, "timeout", NewStringType::kNormal).ToLocalChecked();
        auto timeout_fn = this->client
            .Get(this->isolate)
            ->Get(this->context, timeout)
            .ToLocalChecked()
            ->ToObject(this->context)
            .ToLocalChecked();

        const unsigned argc = 4;
        Local<Value> argv[argc] = {chan, user, len, reason};
        auto promise = timeout_fn
            ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
            .ToLocalChecked()
            ->ToObject(this->context)
            .ToLocalChecked();
        return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
    } else {
        auto timeout = String::NewFromUtf8(this->isolate, "timeout", NewStringType::kNormal).ToLocalChecked();
        auto timeout_fn = this->client
            .Get(this->isolate)
            ->Get(this->context, timeout)
            .ToLocalChecked()
            ->ToObject(this->context)
            .ToLocalChecked();

        const unsigned argc = 3;
        Local<Value> argv[argc] = {chan, user, len};
        auto promise = timeout_fn
            ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
            .ToLocalChecked()
            ->ToObject(this->context)
            .ToLocalChecked();
        return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
    }
}

TmixxPromise* TmixxClient::unban(const char* channel, const char* username) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto user = String::NewFromUtf8(this->isolate, username, NewStringType::kNormal).ToLocalChecked();
    auto unban = String::NewFromUtf8(this->isolate, "unban", NewStringType::kNormal).ToLocalChecked();
    auto unban_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, unban)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {chan, user};
    auto promise = unban_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::unhost(const char* channel) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto unhost = String::NewFromUtf8(this->isolate, "unhost", NewStringType::kNormal).ToLocalChecked();
    auto unhost_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, unhost)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {chan};
    auto promise = unhost_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::unmod(const char* channel) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto unmod = String::NewFromUtf8(this->isolate, "unmod", NewStringType::kNormal).ToLocalChecked();
    auto unmod_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, unmod)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {chan};
    auto promise = unmod_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::unvip(const char* channel, const char* username) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto user = String::NewFromUtf8(this->isolate, username, NewStringType::kNormal).ToLocalChecked();
    auto unvip = String::NewFromUtf8(this->isolate, "unvip", NewStringType::kNormal).ToLocalChecked();
    auto unvip_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, unvip)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {chan, user};
    auto promise = unvip_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::vip(const char* channel, const char* username) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto user = String::NewFromUtf8(this->isolate, username, NewStringType::kNormal).ToLocalChecked();
    auto vip = String::NewFromUtf8(this->isolate, "vip", NewStringType::kNormal).ToLocalChecked();
    auto vip_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, vip)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {chan, user};
    auto promise = vip_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::vips(const char* channel) {
    auto chan = String::NewFromUtf8(this->isolate, channel, NewStringType::kNormal).ToLocalChecked();
    auto vips = String::NewFromUtf8(this->isolate, "vips", NewStringType::kNormal).ToLocalChecked();
    auto vips_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, vips)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 1;
    Local<Value> argv[argc] = {chan};
    auto promise = vips_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

TmixxPromise* TmixxClient::whisper(const char* username, const char* _msg) {
    auto user = String::NewFromUtf8(this->isolate, username, NewStringType::kNormal).ToLocalChecked();
    auto msg = String::NewFromUtf8(this->isolate, _msg, NewStringType::kNormal).ToLocalChecked();
    auto whisper = String::NewFromUtf8(this->isolate, "whisper", NewStringType::kNormal).ToLocalChecked();
    auto whisper_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, whisper)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {user, msg};
    auto promise = whisper_fn
        ->CallAsFunction(this->context, this->client.Get(this->isolate), argc, argv)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();
    return new TmixxPromise(this, this->isolate, this->context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, promise));
}

void TmixxClient::on_action(on_action_t callback) {
    this->cb_action = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto userstate_obj = args[1]->ToObject(context).ToLocalChecked();
        auto userstate = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, userstate_obj));

        auto msg_str = args[2]->ToString(context).ToLocalChecked();
        auto msg_buf = new char[msg_str->Utf8Length(isolate) + 1]();
        msg_str->WriteUtf8(isolate, msg_buf, msg_str->Utf8Length(isolate));

        auto self = args[3]->ToBoolean(isolate)->Value();

        client->cb_action((TmiClient*) client, channel_buf, (TmiObject*) userstate, msg_buf, self);

        delete[] msg_buf;
        delete userstate;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "action", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_action_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_action_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_anongiftpaidupgrade(on_anongiftpaidupgrade_t callback) {
    this->cb_anongiftpaidupgrade = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto username_str = args[1]->ToString(context).ToLocalChecked();
        auto username_buf = new char[username_str->Utf8Length(isolate) + 1]();
        username_str->WriteUtf8(isolate, username_buf, username_str->Utf8Length(isolate));

        auto userstate_obj = args[2]->ToObject(context).ToLocalChecked();
        auto userstate = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, userstate_obj));

        client->cb_anongiftpaidupgrade((TmiClient*) client, channel_buf, username_buf, (TmiObject*) userstate);

        delete userstate;
        delete[] username_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "anongiftpaidupgrade", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_anongiftpaidupgrade_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_anongiftpaidupgrade_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_ban(on_ban_t callback) {
    this->cb_ban = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto username_str = args[1]->ToString(context).ToLocalChecked();
        auto username_buf = new char[username_str->Utf8Length(isolate) + 1]();
        username_str->WriteUtf8(isolate, username_buf, username_str->Utf8Length(isolate));

        auto userstate_obj = args[2]->ToObject(context).ToLocalChecked();
        auto userstate = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, userstate_obj));

        client->cb_ban((TmiClient*) client, channel_buf, username_buf, (TmiObject*) userstate);

        delete userstate;
        delete[] username_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "ban", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_ban_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_ban_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_chat(on_chat_t callback) {
    this->cb_chat = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto userstate_obj = args[1]->ToObject(context).ToLocalChecked();
        auto userstate = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, userstate_obj));

        auto message_str = args[2]->ToString(context).ToLocalChecked();
        auto message_buf = new char[message_str->Utf8Length(isolate) + 1]();
        message_str->WriteUtf8(isolate, message_buf, message_str->Utf8Length(isolate));

        auto self = args[3]->ToBoolean(isolate)->Value();

        client->cb_chat((TmiClient*) client, channel_buf, (TmiObject*) userstate, message_buf, self);

        delete userstate;
        delete[] message_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "chat", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_chat_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_chat_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_cheer(on_cheer_t callback) {
    this->cb_cheer = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto userstate_obj = args[1]->ToObject(context).ToLocalChecked();
        auto userstate = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, userstate_obj));

        auto msg_str = args[2]->ToString(context).ToLocalChecked();
        auto msg_buf = new char[msg_str->Utf8Length(isolate) + 1]();
        msg_str->WriteUtf8(isolate, msg_buf, msg_str->Utf8Length(isolate));

        client->cb_cheer((TmiClient*) client, channel_buf, (TmiObject*) userstate, msg_buf);

        delete[] msg_buf;
        delete userstate;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "cheer", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_cheer_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_cheer_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_clearchat(on_clearchat_t callback) {
    this->cb_clearchat = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        client->cb_clearchat((TmiClient*) client, channel_buf);

        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "clearchat", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_clearchat_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_clearchat_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_connected(on_connected_t callback) {
    this->cb_connected = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto address_str = args[0]->ToString(context).ToLocalChecked();
        auto address_buf = new char[address_str->Utf8Length(isolate) + 1]();
        address_str->WriteUtf8(isolate, address_buf, address_str->Utf8Length(isolate));

        auto port = args[1]->ToInteger(context).ToLocalChecked()->Value();

        client->cb_connected((TmiClient*) client, address_buf, port);

        delete[] address_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "connected", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_connected_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_connected_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_connecting(on_connecting_t callback) {
    this->cb_connecting = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto address_str = args[0]->ToString(context).ToLocalChecked();
        auto address_buf = new char[address_str->Utf8Length(isolate) + 1]();
        address_str->WriteUtf8(isolate, address_buf, address_str->Utf8Length(isolate));

        auto port = args[1]->ToInteger(context).ToLocalChecked()->Value();

        client->cb_connecting((TmiClient*) client, address_buf, port);

        delete[] address_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "connecting", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_connecting_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_connecting_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_disconnected(on_disconnected_t callback) {
    this->cb_disconnected = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto reason_str = args[0]->ToString(context).ToLocalChecked();
        auto reason_buf = new char[reason_str->Utf8Length(isolate) + 1]();
        reason_str->WriteUtf8(isolate, reason_buf, reason_str->Utf8Length(isolate));

        client->cb_disconnected((TmiClient*) client, reason_buf);

        delete[] reason_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "disconnected", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_disconnected_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_disconnected_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_emoteonly(on_emoteonly_t callback) {
    this->cb_emoteonly = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto enabled = args[1]->ToBoolean(isolate)->Value();

        client->cb_emoteonly((TmiClient*) client, channel_buf, enabled);

        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "emoteonly", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_emoteonly_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_emoteonly_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_emotesets(on_emotesets_t callback) {
    this->cb_emotesets = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto sets_str = args[0]->ToString(context).ToLocalChecked();
        auto sets_buf = new char[sets_str->Utf8Length(isolate) + 1]();
        sets_str->WriteUtf8(isolate, sets_buf, sets_str->Utf8Length(isolate));

        auto obj_obj = args[1]->ToObject(context).ToLocalChecked();
        auto obj = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, obj_obj));

        client->cb_emotesets((TmiClient*) client, sets_buf, (TmiObject*) obj);

        delete obj;
        delete[] sets_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "emotesets", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_emotesets_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_emotesets_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_followersonly(on_followersonly_t callback) {
    this->cb_followersonly = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto enabled = args[1]->ToBoolean(isolate)->Value();

        auto length = args[2]->ToInteger(context).ToLocalChecked()->Value();

        client->cb_followersonly((TmiClient*) client, channel_buf, enabled, length);

        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "followersonly", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_followersonly_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_followersonly_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_giftpaidupgrade(on_giftpaidupgrade_t callback) {
    this->cb_giftpaidupgrade = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto username_str = args[1]->ToString(context).ToLocalChecked();
        auto username_buf = new char[username_str->Utf8Length(isolate) + 1]();
        username_str->WriteUtf8(isolate, username_buf, username_str->Utf8Length(isolate));

        auto sender_str = args[2]->ToString(context).ToLocalChecked();
        auto sender_buf = new char[sender_str->Utf8Length(isolate) + 1]();
        sender_str->WriteUtf8(isolate, sender_buf, sender_str->Utf8Length(isolate));

        auto userstate_obj = args[3]->ToObject(context).ToLocalChecked();
        auto userstate = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, userstate_obj));

        client->cb_giftpaidupgrade((TmiClient*) client, channel_buf, username_buf, sender_buf, (TmiObject*) userstate);

        delete userstate;
        delete[] sender_buf;
        delete[] username_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "giftpaidupgrade", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_giftpaidupgrade_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_giftpaidupgrade_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_hosted(on_hosted_t callback) {
    this->cb_hosted = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto username_str = args[1]->ToString(context).ToLocalChecked();
        auto username_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        username_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto viewers = args[2]->ToInteger(context).ToLocalChecked()->Value();

        auto autohost = args[3]->ToBoolean(isolate)->Value();

        client->cb_hosted((TmiClient*) client, channel_buf, username_buf, viewers, autohost);

        delete[] username_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "hosted", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_hosted_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_hosted_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_hosting(on_hosting_t callback) {
    this->cb_hosting = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto target_str = args[1]->ToString(context).ToLocalChecked();
        auto target_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        target_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto viewers = args[2]->ToInteger(context).ToLocalChecked()->Value();

        client->cb_hosting((TmiClient*) client, channel_buf, target_buf, viewers);

        delete[] target_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "hosting", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_hosting_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_hosting_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_join(on_join_t callback) {
    this->cb_join = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto username_str = args[1]->ToString(context).ToLocalChecked();
        auto username_buf = new char[username_str->Utf8Length(isolate) + 1]();
        username_str->WriteUtf8(isolate, username_buf, username_str->Utf8Length(isolate));

        auto self = args[2]->ToBoolean(isolate)->Value();

        client->cb_join((TmiClient*) client, channel_buf, username_buf, self);

        delete[] username_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "join", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_join_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_join_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_logon(on_logon_t callback) {
    this->cb_logon = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        client->cb_logon((TmiClient*) client);
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "logon", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_logon_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_logon_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_message(on_message_t callback) {
    this->cb_message = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto userstate_obj = args[1]->ToObject(context).ToLocalChecked();
        auto userstate = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, userstate_obj));

        auto msg_str = args[2]->ToString(context).ToLocalChecked();
        auto msg_buf = new char[msg_str->Utf8Length(isolate) + 1]();
        msg_str->WriteUtf8(isolate, msg_buf, msg_str->Utf8Length(isolate));

        auto self = args[3]->ToBoolean(isolate)->Value();

        client->cb_message((TmiClient*) client, channel_buf, (TmiObject*) userstate, msg_buf, self);

        delete[] channel_buf;
        delete userstate;
        delete[] msg_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "message", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_message_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_message_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_messagedeleted(on_messagedeleted_t callback) {
    this->cb_messagedeleted = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto username_str = args[1]->ToString(context).ToLocalChecked();
        auto username_buf = new char[username_str->Utf8Length(isolate) + 1]();
        username_str->WriteUtf8(isolate, username_buf, username_str->Utf8Length(isolate));

        auto deleted_str = args[2]->ToString(context).ToLocalChecked();
        auto deleted_buf = new char[deleted_str->Utf8Length(isolate) + 1]();
        deleted_str->WriteUtf8(isolate, deleted_buf, deleted_str->Utf8Length(isolate));

        auto userstate_obj = args[3]->ToObject(context).ToLocalChecked();
        auto userstate = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, userstate_obj));

        client->cb_messagedeleted((TmiClient*) client, channel_buf, username_buf, deleted_buf, (TmiObject*) userstate);

        delete userstate;
        delete[] deleted_buf;
        delete[] username_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "messagedeleted", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_messagedeleted_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_messagedeleted_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_mod(on_mod_t callback) {
    this->cb_mod = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto username_str = args[1]->ToString(context).ToLocalChecked();
        auto username_buf = new char[username_str->Utf8Length(isolate) + 1]();
        username_str->WriteUtf8(isolate, username_buf, username_str->Utf8Length(isolate));

        client->cb_mod((TmiClient*) client, channel_buf, username_buf);

        delete[] username_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "mod", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_mod_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_mod_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_mods(on_mods_t callback) {
    this->cb_mods = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto mods_obj = args[1]->ToObject(context).ToLocalChecked();
        auto mods = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, mods_obj));

        client->cb_mods((TmiClient*) client, channel_buf, (TmiObject*) mods);

        delete mods;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "mods", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_mods_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_mods_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_notice(on_notice_t callback) {
    this->cb_notice = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto msgid_str = args[1]->ToString(context).ToLocalChecked();
        auto msgid_buf = new char[msgid_str->Utf8Length(isolate) + 1]();
        msgid_str->WriteUtf8(isolate, msgid_buf, msgid_str->Utf8Length(isolate));

        auto msg_str = args[2]->ToString(context).ToLocalChecked();
        auto msg_buf = new char[msg_str->Utf8Length(isolate) + 1]();
        msg_str->WriteUtf8(isolate, msg_buf, msg_str->Utf8Length(isolate));

        client->cb_notice((TmiClient*) client, channel_buf, msgid_buf, msg_buf);

        delete[] msg_buf;
        delete[] msgid_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "notice", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_notice_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_notice_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_part(on_part_t callback) {
    this->cb_part = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto username_str = args[1]->ToString(context).ToLocalChecked();
        auto username_buf = new char[username_str->Utf8Length(isolate) + 1]();
        username_str->WriteUtf8(isolate, username_buf, username_str->Utf8Length(isolate));

        auto self = args[2]->ToBoolean(isolate)->Value();

        client->cb_part((TmiClient*) client, channel_buf, username_buf, self);

        delete[] username_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "part", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_part_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_part_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_ping(on_ping_t callback) {
    this->cb_ping = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        client->cb_ping((TmiClient*) client);
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "ping", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_ping_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_ping_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_pong(on_pong_t callback) {
    this->cb_pong = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto latency = args[0]->ToNumber(context).ToLocalChecked()->Value();

        client->cb_pong((TmiClient*) client, latency);
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "pong", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_pong_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_pong_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_r9kbeta(on_r9kbeta_t callback) {
    this->cb_r9kbeta = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto enabled = args[1]->ToBoolean(isolate)->Value();

        client->cb_r9kbeta((TmiClient*) client, channel_buf, enabled);

        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "r9kbeta", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_r9kbeta_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_r9kbeta_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_raided(on_raided_t callback) {
    this->cb_raided = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto username_str = args[1]->ToString(context).ToLocalChecked();
        auto username_buf = new char[username_str->Utf8Length(isolate) + 1]();
        username_str->WriteUtf8(isolate, username_buf, username_str->Utf8Length(isolate));

        auto viewers = args[2]->ToInteger(context).ToLocalChecked()->Value();

        client->cb_raided((TmiClient*) client, channel_buf, username_buf, viewers);

        delete[] username_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "raided", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_raided_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_raided_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_raw_message(on_raw_message_t callback) {
    this->cb_raw_message = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto msg_cloned_obj = args[0]->ToObject(context).ToLocalChecked();
        auto msg_cloned = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, msg_cloned_obj));

        auto msg_obj = args[1]->ToObject(context).ToLocalChecked();
        auto msg = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, msg_obj));

        client->cb_raw_message((TmiClient*) client, (TmiObject*) msg_cloned, (TmiObject*) msg);

        delete[] msg;
        delete[] msg_cloned;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "raw_message", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_raw_message_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_raw_message_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_reconnect(on_reconnect_t callback) {
    this->cb_reconnect = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        client->cb_reconnect((TmiClient*) client);
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "reconnect", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_reconnect_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_reconnect_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_resub(on_resub_t callback) {
    this->cb_resub = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto username_str = args[1]->ToString(context).ToLocalChecked();
        auto username_buf = new char[username_str->Utf8Length(isolate) + 1]();
        username_str->WriteUtf8(isolate, username_buf, username_str->Utf8Length(isolate));

        auto streak = args[2]->ToInteger(context).ToLocalChecked()->Value();

        auto msg_str = args[3]->ToString(context).ToLocalChecked();
        auto msg_buf = new char[msg_str->Utf8Length(isolate) + 1]();
        msg_str->WriteUtf8(isolate, msg_buf, msg_str->Utf8Length(isolate));

        auto userstate_obj = args[4]->ToObject(context).ToLocalChecked();
        auto userstate = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, userstate_obj));

        auto methods_obj = args[5]->ToObject(context).ToLocalChecked();
        auto methods = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, methods_obj));

        client->cb_resub((TmiClient*) client, channel_buf, username_buf, streak, msg_buf, (TmiObject*) userstate, (TmiObject*) methods);

        delete methods;
        delete userstate;
        delete[] msg_buf;
        delete[] username_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "resub", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_resub_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_resub_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_roomstate(on_roomstate_t callback) {
    this->cb_roomstate = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto state_obj = args[1]->ToObject(context).ToLocalChecked();
        auto state = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, state_obj));

        client->cb_roomstate((TmiClient*) client, channel_buf, (TmiObject*) state);

        delete state;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "roomstate", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_roomstate_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_roomstate_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_serverchange(on_serverchange_t callback) {
    this->cb_serverchange = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        client->cb_serverchange((TmiClient*) client, channel_buf);

        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "serverchange", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_serverchange_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_serverchange_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_slowmode(on_slowmode_t callback) {
    this->cb_slowmode = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto enabled = args[1]->ToBoolean(isolate)->Value();

        auto length = args[2]->ToInteger(context).ToLocalChecked()->Value();

        client->cb_slowmode((TmiClient*) client, channel_buf, enabled, length);

        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "slowmode", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_slowmode_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_slowmode_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_subgift(on_subgift_t callback) {
    this->cb_subgift = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto username_str = args[1]->ToString(context).ToLocalChecked();
        auto username_buf = new char[username_str->Utf8Length(isolate) + 1]();
        username_str->WriteUtf8(isolate, username_buf, username_str->Utf8Length(isolate));

        auto streak = args[2]->ToInteger(context).ToLocalChecked()->Value();

        auto recipient_str = args[3]->ToString(context).ToLocalChecked();
        auto recipient_buf = new char[recipient_str->Utf8Length(isolate) + 1]();
        recipient_str->WriteUtf8(isolate, recipient_buf, recipient_str->Utf8Length(isolate));

        auto methods_obj = args[4]->ToObject(context).ToLocalChecked();
        auto methods = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, methods_obj));

        auto userstate_obj = args[5]->ToObject(context).ToLocalChecked();
        auto userstate = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, userstate_obj));

        client->cb_subgift((TmiClient*) client, channel_buf, username_buf, streak, recipient_buf, (TmiObject*) methods, (TmiObject*) userstate);

        delete userstate;
        delete methods;
        delete[] recipient_buf;
        delete[] username_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "subgift", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_subgift_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_subgift_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_submysterygift(on_submysterygift_t callback) {
    this->cb_submysterygift = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto username_str = args[1]->ToString(context).ToLocalChecked();
        auto username_buf = new char[username_str->Utf8Length(isolate) + 1]();
        username_str->WriteUtf8(isolate, username_buf, username_str->Utf8Length(isolate));

        auto num = args[2]->ToInteger(context).ToLocalChecked()->Value();

        auto methods_obj = args[3]->ToObject(context).ToLocalChecked();
        auto methods = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, methods_obj));

        auto userstate_obj = args[4]->ToObject(context).ToLocalChecked();
        auto userstate = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, userstate_obj));

        client->cb_submysterygift((TmiClient*) client, channel_buf, username_buf, num, (TmiObject*) methods, (TmiObject*) userstate);

        delete userstate;
        delete methods;
        delete[] username_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "submysterygift", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_submysterygift_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_submysterygift_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_subscribers(on_subscribers_t callback) {
    this->cb_subscribers = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto enabled = args[1]->ToBoolean(isolate)->Value();

        client->cb_subscribers((TmiClient*) client, channel_buf, enabled);

        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "subscribers", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_subscribers_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_subscribers_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_subscription(on_subscription_t callback) {
    this->cb_subscription = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto username_str = args[1]->ToString(context).ToLocalChecked();
        auto username_buf = new char[username_str->Utf8Length(isolate) + 1]();
        username_str->WriteUtf8(isolate, username_buf, username_str->Utf8Length(isolate));

        auto methods_obj = args[2]->ToObject(context).ToLocalChecked();
        auto methods = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, methods_obj));

        auto msg_str = args[3]->ToString(context).ToLocalChecked();
        auto msg_buf = new char[msg_str->Utf8Length(isolate) + 1]();
        msg_str->WriteUtf8(isolate, msg_buf, msg_str->Utf8Length(isolate));

        auto userstate_obj = args[4]->ToObject(context).ToLocalChecked();
        auto userstate = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, userstate_obj));

        client->cb_subscription((TmiClient*) client, channel_buf, username_buf, (TmiObject*) methods, msg_buf, (TmiObject*) userstate);

        delete userstate;
        delete[] msg_buf;
        delete methods;
        delete[] username_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "subscription", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_subscription_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_subscription_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_timeout(on_timeout_t callback) {
    this->cb_timeout = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto username_str = args[1]->ToString(context).ToLocalChecked();
        auto username_buf = new char[username_str->Utf8Length(isolate) + 1]();
        username_str->WriteUtf8(isolate, username_buf, username_str->Utf8Length(isolate));

        auto duration = args[2]->ToInteger(context).ToLocalChecked()->Value();

        auto userstate_obj = args[3]->ToObject(context).ToLocalChecked();
        auto userstate = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, userstate_obj));

        client->cb_timeout((TmiClient*) client, channel_buf, username_buf, duration, (TmiObject*) userstate);

        delete userstate;
        delete username_buf;
        delete channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "timeout", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_timeout_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_timeout_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_unhost(on_unhost_t callback) {
    this->cb_unhost = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto viewers = args[1]->ToInteger(context).ToLocalChecked()->Value();

        client->cb_unhost((TmiClient*) client, channel_buf, viewers);

        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "unhost", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_unhost_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_unhost_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_unmod(on_unmod_t callback) {
    this->cb_unmod = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto username_str = args[1]->ToString(context).ToLocalChecked();
        auto username_buf = new char[username_str->Utf8Length(isolate) + 1]();
        username_str->WriteUtf8(isolate, username_buf, username_str->Utf8Length(isolate));

        client->cb_unmod((TmiClient*) client, channel_buf, username_buf);

        delete[] username_buf;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "unmod", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_unmod_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_unmod_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_vips(on_vips_t callback) {
    this->cb_vips = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto channel_str = args[0]->ToString(context).ToLocalChecked();
        auto channel_buf = new char[channel_str->Utf8Length(isolate) + 1]();
        channel_str->WriteUtf8(isolate, channel_buf, channel_str->Utf8Length(isolate));

        auto vips_obj = args[1]->ToObject(context).ToLocalChecked();
        auto vips = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, vips_obj));

        client->cb_vips((TmiClient*) client, channel_buf, (TmiObject*) vips);

        delete vips;
        delete[] channel_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "vips", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_vips_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_vips_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}

void TmixxClient::on_whisper(on_whisper_t callback) {
    this->cb_whisper = callback;
    auto client_obj = this->obj;
    auto client_value = Local<Value>(client_obj);

    auto tpl = FunctionTemplate::New(this->isolate, [](auto args) -> void {
        auto isolate = args.GetIsolate();
        auto context = isolate->GetCurrentContext();
        auto client_obj = args
            .Data()
            ->ToObject(context)
            .ToLocalChecked();
        auto client = node::ObjectWrap::Unwrap<TmixxClient>(client_obj);

        auto from_str = args[0]->ToString(context).ToLocalChecked();
        auto from_buf = new char[from_str->Utf8Length(isolate) + 1]();
        from_str->WriteUtf8(isolate, from_buf, from_str->Utf8Length(isolate));

        auto userstate_obj = args[1]->ToObject(context).ToLocalChecked();
        auto userstate = new TmixxObject(client, isolate, context, Persistent<Object, CopyablePersistentTraits<Object>>(isolate, userstate_obj));

        auto msg_str = args[2]->ToString(context).ToLocalChecked();
        auto msg_buf = new char[msg_str->Utf8Length(isolate) + 1]();
        msg_str->WriteUtf8(isolate, msg_buf, msg_str->Utf8Length(isolate));

        auto self = args[3]->ToBoolean(isolate)->Value();

        client->cb_whisper((TmiClient*) client, from_buf, (TmiObject*) userstate, msg_buf, self);

        delete[] msg_buf;
        delete userstate;
        delete[] from_buf;
    }, client_value);
    auto fn = tpl->GetFunction(this->context).ToLocalChecked();

    auto msg = String::NewFromUtf8(this->isolate, "whisper", NewStringType::kNormal).ToLocalChecked();
    auto on = String::NewFromUtf8(this->isolate, "on", NewStringType::kNormal).ToLocalChecked();
    auto on_whisper_fn = this->client
        .Get(this->isolate)
        ->Get(this->context, on)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 2;
    Local<Value> argv[argc] = {msg, fn};
    on_whisper_fn->CallAsFunction(context, this->client.Get(this->isolate), argc, argv).ToLocalChecked();
}
