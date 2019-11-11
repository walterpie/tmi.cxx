#include <node.h>
#include "../include/tmi_cxx.h"

using namespace tmi_cxx;

extern "C" void tmi_connect(TmiClient *client) {
    ((TmixxClient *) client)->connect();
}

extern "C" void tmi_del_promise(TmiPromise *promise) {
    delete (TmixxPromise *) promise;
}

extern "C" TmiPromise *tmi_promise_and_then(TmiPromise *promise, and_then_t and_then) {
    return (TmiPromise *)((TmixxPromise *) promise)->and_then(and_then);
}

extern "C" void tmi_promise_or_else(TmiPromise *promise, or_else_t or_else) {
    ((TmixxPromise *) promise)->or_else(or_else);
}

extern "C" TmiPromise *tmi_client_action(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->action();
}

extern "C" TmiPromise *tmi_client_ban(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->ban();
}

extern "C" TmiPromise *tmi_client_clear(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->clear();
}

extern "C" TmiPromise *tmi_client_color(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->color();
}

extern "C" TmiPromise *tmi_client_commercial(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->commercial();
}

extern "C" TmiPromise *tmi_client_deletemessage(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->deletemessage();
}

extern "C" TmiPromise *tmi_client_disconnect(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->disconnect();
}

extern "C" TmiPromise *tmi_client_emoteonly(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->emoteonly();
}

extern "C" TmiPromise *tmi_client_emoteonlyoff(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->emoteonlyoff();
}

extern "C" TmiPromise *tmi_client_followersonly(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->followersonly();
}

extern "C" TmiPromise *tmi_client_followersonlyoff(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->followersonlyoff();
}

extern "C" TmiPromise *tmi_client_host(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->host();
}

extern "C" TmiPromise *tmi_client_join(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->join();
}

extern "C" TmiPromise *tmi_client_mod(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->mod();
}

extern "C" TmiPromise *tmi_client_mods(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->mods();
}

extern "C" TmiPromise *tmi_client_part(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->part();
}

extern "C" TmiPromise *tmi_client_ping(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->ping();
}

extern "C" TmiPromise *tmi_client_r9kbeta(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->r9kbeta();
}

extern "C" TmiPromise *tmi_client_r9kbetaoff(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->r9kbetaoff();
}

extern "C" TmiPromise *tmi_client_raw(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->raw();
}

extern "C" TmiPromise *tmi_client_say(TmiClient *client, char *channel, char *msg) {
    return (TmiPromise *)((TmixxClient *) client)->say(channel, msg);
}

extern "C" TmiPromise *tmi_client_slow(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->slow();
}

extern "C" TmiPromise *tmi_client_slowoff(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->slowoff();
}

extern "C" TmiPromise *tmi_client_subscribers(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->subscribers();
}

extern "C" TmiPromise *tmi_client_subscribersoff(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->subscribersoff();
}

extern "C" TmiPromise *tmi_client_timeout(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->timeout();
}

extern "C" TmiPromise *tmi_client_unban(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->unban();
}

extern "C" TmiPromise *tmi_client_unhost(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->unhost();
}

extern "C" TmiPromise *tmi_client_unmod(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->unmod();
}

extern "C" TmiPromise *tmi_client_unvip(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->unvip();
}

extern "C" TmiPromise *tmi_client_vip(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->vip();
}

extern "C" TmiPromise *tmi_client_vips(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->vips();
}

extern "C" TmiPromise *tmi_client_whisper(TmiClient *client) {
    return (TmiPromise *)((TmixxClient *) client)->whisper();
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
        auto result = (TmixxPromise*) promise->cb_and_then((TmiClient*) promise->client, nullptr);
        auto return_value = Object::New(isolate);
        result->Wrap(return_value);
        args.GetReturnValue().Set(return_value);
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
        promise->cb_or_else((TmiClient*) promise->client, nullptr);
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

void TmixxClient::connect() {
    auto client = this->client.Get(this->isolate);
    auto connect = String::NewFromUtf8(this->isolate, "connect", NewStringType::kNormal).ToLocalChecked();
    auto connect_fn = client
        ->Get(this->context, connect)
        .ToLocalChecked()
        ->ToObject(this->context)
        .ToLocalChecked();

    const unsigned argc = 0;
    Local<Value> argv[argc] = {};
    connect_fn->CallAsFunction(context, client, argc, argv).ToLocalChecked();
}

TmixxPromise* TmixxClient::action() {
    return nullptr;
}

TmixxPromise* TmixxClient::ban() {
    return nullptr;
}

TmixxPromise* TmixxClient::clear() {
    return nullptr;
}

TmixxPromise* TmixxClient::color() {
    return nullptr;
}

TmixxPromise* TmixxClient::commercial() {
    return nullptr;
}

TmixxPromise* TmixxClient::deletemessage() {
    return nullptr;
}

TmixxPromise* TmixxClient::disconnect() {
    return nullptr;
}

TmixxPromise* TmixxClient::emoteonly() {
    return nullptr;
}

TmixxPromise* TmixxClient::emoteonlyoff() {
    return nullptr;
}

TmixxPromise* TmixxClient::followersonly() {
    return nullptr;
}

TmixxPromise* TmixxClient::followersonlyoff() {
    return nullptr;
}

TmixxPromise* TmixxClient::host() {
    return nullptr;
}

TmixxPromise* TmixxClient::join() {
    return nullptr;
}

TmixxPromise* TmixxClient::mod() {
    return nullptr;
}

TmixxPromise* TmixxClient::mods() {
    return nullptr;
}

TmixxPromise* TmixxClient::part() {
    return nullptr;
}

TmixxPromise* TmixxClient::ping() {
    return nullptr;
}

TmixxPromise* TmixxClient::r9kbeta() {
    return nullptr;
}

TmixxPromise* TmixxClient::r9kbetaoff() {
    return nullptr;
}

TmixxPromise* TmixxClient::raw() {
    return nullptr;
}

TmixxPromise *TmixxClient::say(char* channel, char* message) {
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

TmixxPromise* TmixxClient::slow() {
    return nullptr;
}

TmixxPromise* TmixxClient::slowoff() {
    return nullptr;
}

TmixxPromise* TmixxClient::subscribers() {
    return nullptr;
}

TmixxPromise* TmixxClient::subscribersoff() {
    return nullptr;
}

TmixxPromise* TmixxClient::timeout() {
    return nullptr;
}

TmixxPromise* TmixxClient::unban() {
    return nullptr;
}

TmixxPromise* TmixxClient::unhost() {
    return nullptr;
}

TmixxPromise* TmixxClient::unmod() {
    return nullptr;
}

TmixxPromise* TmixxClient::unvip() {
    return nullptr;
}

TmixxPromise* TmixxClient::vip() {
    return nullptr;
}

TmixxPromise* TmixxClient::vips() {
    return nullptr;
}

TmixxPromise* TmixxClient::whisper() {
    return nullptr;
}

void TmixxClient::on_action(on_action_t callback) {
}

void TmixxClient::on_anongiftpaidupgrade(on_anongiftpaidupgrade_t callback) {
}

void TmixxClient::on_ban(on_ban_t callback) {
}

void TmixxClient::on_chat(on_chat_t callback) {
}

void TmixxClient::on_cheer(on_cheer_t callback) {
}

void TmixxClient::on_clearchat(on_clearchat_t callback) {
}

void TmixxClient::on_connected(on_connected_t callback) {
}

void TmixxClient::on_connecting(on_connecting_t callback) {
}

void TmixxClient::on_disconnected(on_disconnected_t callback) {
}

void TmixxClient::on_emoteonly(on_emoteonly_t callback) {
}

void TmixxClient::on_emotesets(on_emotesets_t callback) {
}

void TmixxClient::on_followersonly(on_followersonly_t callback) {
}

void TmixxClient::on_giftpaidupgrade(on_giftpaidupgrade_t callback) {
}

void TmixxClient::on_hosted(on_hosted_t callback) {
}

void TmixxClient::on_hosting(on_hosting_t callback) {
}

void TmixxClient::on_join(on_join_t callback) {
}

void TmixxClient::on_logon(on_logon_t callback) {
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

        auto msg_str = args[2]->ToString(context).ToLocalChecked();
        auto msg_buf = new char[msg_str->Utf8Length(isolate) + 1]();
        msg_str->WriteUtf8(isolate, msg_buf, msg_str->Utf8Length(isolate));

        auto self = args[3]->ToBoolean(isolate)->Value();

        client->cb_message((TmiClient*) client, channel_buf, nullptr, msg_buf, self);

        delete[] channel_buf;
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
}

void TmixxClient::on_mod(on_mod_t callback) {
}

void TmixxClient::on_mods(on_mods_t callback) {
}

void TmixxClient::on_notice(on_notice_t callback) {
}

void TmixxClient::on_part(on_part_t callback) {
}

void TmixxClient::on_ping(on_ping_t callback) {
}

void TmixxClient::on_pong(on_pong_t callback) {
}

void TmixxClient::on_r9kbeta(on_r9kbeta_t callback) {
}

void TmixxClient::on_raided(on_raided_t callback) {
}

void TmixxClient::on_raw_message(on_raw_message_t callback) {
}

void TmixxClient::on_reconnect(on_reconnect_t callback) {
}

void TmixxClient::on_resub(on_resub_t callback) {
}

void TmixxClient::on_roomstate(on_roomstate_t callback) {
}

void TmixxClient::on_serverchange(on_serverchange_t callback) {
}

void TmixxClient::on_slowmode(on_slowmode_t callback) {
}

void TmixxClient::on_subgift(on_subgift_t callback) {
}

void TmixxClient::on_submysterygift(on_submysterygift_t callback) {
}

void TmixxClient::on_subscribers(on_subscribers_t callback) {
}

void TmixxClient::on_subscription(on_subscription_t callback) {
}

void TmixxClient::on_timeout(on_timeout_t callback) {
}

void TmixxClient::on_unhost(on_unhost_t callback) {
}

void TmixxClient::on_unmod(on_unmod_t callback) {
}

void TmixxClient::on_vips(on_vips_t callback) {
}

void TmixxClient::on_whisper(on_whisper_t callback) {
}
