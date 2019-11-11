#ifndef TMI_CXX_H
#define TMI_CXX_H 1

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <stddef.h>

typedef struct TmiClient TmiClient;
typedef struct TmiPromise TmiPromise;
typedef char *TmiString;
typedef struct TmiObject TmiObject;

typedef TmiPromise *(*and_then_t)(TmiClient *client, TmiObject *obj);
typedef void (*or_else_t)(TmiClient *client, TmiObject *obj);

typedef void (*on_action_t)(TmiClient *client);
typedef void (*on_anongiftpaidupgrade_t)(TmiClient *client);
typedef void (*on_ban_t)(TmiClient *client);
typedef void (*on_chat_t)(TmiClient *client);
typedef void (*on_cheer_t)(TmiClient *client);
typedef void (*on_clearchat_t)(TmiClient *client);
typedef void (*on_connected_t)(TmiClient *client);
typedef void (*on_connecting_t)(TmiClient *client);
typedef void (*on_disconnected_t)(TmiClient *client);
typedef void (*on_emoteonly_t)(TmiClient *client);
typedef void (*on_emotesets_t)(TmiClient *client);
typedef void (*on_followersonly_t)(TmiClient *client);
typedef void (*on_giftpaidupgrade_t)(TmiClient *client);
typedef void (*on_hosted_t)(TmiClient *client);
typedef void (*on_hosting_t)(TmiClient *client);
typedef void (*on_join_t)(TmiClient *client);
typedef void (*on_logon_t)(TmiClient *client);
typedef void (*on_message_t)(TmiClient *client, char *channel, TmiObject *userstate, char *msg, int self);
typedef void (*on_messagedeleted_t)(TmiClient *client);
typedef void (*on_mod_t)(TmiClient *client);
typedef void (*on_mods_t)(TmiClient *client);
typedef void (*on_notice_t)(TmiClient *client);
typedef void (*on_part_t)(TmiClient *client);
typedef void (*on_ping_t)(TmiClient *client);
typedef void (*on_pong_t)(TmiClient *client);
typedef void (*on_r9kbeta_t)(TmiClient *client);
typedef void (*on_raided_t)(TmiClient *client);
typedef void (*on_raw_message_t)(TmiClient *client);
typedef void (*on_reconnect_t)(TmiClient *client);
typedef void (*on_resub_t)(TmiClient *client);
typedef void (*on_roomstate_t)(TmiClient *client);
typedef void (*on_serverchange_t)(TmiClient *client);
typedef void (*on_slowmode_t)(TmiClient *client);
typedef void (*on_subgift_t)(TmiClient *client);
typedef void (*on_submysterygift_t)(TmiClient *client);
typedef void (*on_subscribers_t)(TmiClient *client);
typedef void (*on_subscription_t)(TmiClient *client);
typedef void (*on_timeout_t)(TmiClient *client);
typedef void (*on_unhost_t)(TmiClient *client);
typedef void (*on_unmod_t)(TmiClient *client);
typedef void (*on_vips_t)(TmiClient *client);
typedef void (*on_whisper_t)(TmiClient *client);

void tmi_connect(TmiClient *client, void *userdata);
void *tmi_userdata(TmiClient *client);

TmiPromise *tmi_promise_and_then(TmiPromise *promise, and_then_t and_then);
void tmi_promise_or_else(TmiPromise *promise, or_else_t or_else);

void tmi_del_object(TmiObject *object);

TmiObject *tmi_object_get_properties(TmiObject *object);

int tmi_object_is_object(TmiObject *object);
int tmi_object_is_number(TmiObject *object);
int tmi_object_is_bool(TmiObject *object);
int tmi_object_is_array(TmiObject *object);
int tmi_object_is_string(TmiObject *object);

TmiObject *tmi_object_to_object(TmiObject *object);
double tmi_object_to_number(TmiObject *object);
int tmi_object_to_bool(TmiObject *object);
TmiObject *tmi_object_to_array(TmiObject *object);
char *tmi_object_to_string(TmiObject *object);

TmiObject *tmi_object_index(TmiObject *object, size_t idx);
TmiObject *tmi_object_get(TmiObject *object, char *str);

TmiPromise *tmi_client_action(TmiClient *client);
TmiPromise *tmi_client_ban(TmiClient *client);
TmiPromise *tmi_client_clear(TmiClient *client);
TmiPromise *tmi_client_color(TmiClient *client);
TmiPromise *tmi_client_commercial(TmiClient *client);
TmiPromise *tmi_client_deletemessage(TmiClient *client);
TmiPromise *tmi_client_disconnect(TmiClient *client);
TmiPromise *tmi_client_emoteonly(TmiClient *client);
TmiPromise *tmi_client_emoteonlyoff(TmiClient *client);
TmiPromise *tmi_client_followersonly(TmiClient *client);
TmiPromise *tmi_client_followersonlyoff(TmiClient *client);
TmiPromise *tmi_client_host(TmiClient *client);
TmiPromise *tmi_client_join(TmiClient *client);
TmiPromise *tmi_client_mod(TmiClient *client);
TmiPromise *tmi_client_mods(TmiClient *client);
TmiPromise *tmi_client_part(TmiClient *client);
TmiPromise *tmi_client_ping(TmiClient *client);
TmiPromise *tmi_client_r9kbeta(TmiClient *client);
TmiPromise *tmi_client_r9kbetaoff(TmiClient *client);
TmiPromise *tmi_client_raw(TmiClient *client);
TmiPromise *tmi_client_say(TmiClient *client, char *channel, char *msg);
TmiPromise *tmi_client_slow(TmiClient *client);
TmiPromise *tmi_client_slowoff(TmiClient *client);
TmiPromise *tmi_client_subscribers(TmiClient *client);
TmiPromise *tmi_client_subscribersoff(TmiClient *client);
TmiPromise *tmi_client_timeout(TmiClient *client);
TmiPromise *tmi_client_unban(TmiClient *client);
TmiPromise *tmi_client_unhost(TmiClient *client);
TmiPromise *tmi_client_unmod(TmiClient *client);
TmiPromise *tmi_client_unvip(TmiClient *client);
TmiPromise *tmi_client_vip(TmiClient *client);
TmiPromise *tmi_client_vips(TmiClient *client);
TmiPromise *tmi_client_whisper(TmiClient *client);

void tmi_on_action(TmiClient *client, on_action_t callback);
void tmi_on_anongiftpaidupgrade(TmiClient *client, on_anongiftpaidupgrade_t callback);
void tmi_on_ban(TmiClient *client, on_ban_t callback);
void tmi_on_chat(TmiClient *client, on_chat_t callback);
void tmi_on_cheer(TmiClient *client, on_cheer_t callback);
void tmi_on_clearchat(TmiClient *client, on_clearchat_t callback);
void tmi_on_connected(TmiClient *client, on_connected_t callback);
void tmi_on_connecting(TmiClient *client, on_connecting_t callback);
void tmi_on_disconnected(TmiClient *client, on_disconnected_t callback);
void tmi_on_emoteonly(TmiClient *client, on_emoteonly_t callback);
void tmi_on_emotesets(TmiClient *client, on_emotesets_t callback);
void tmi_on_followersonly(TmiClient *client, on_followersonly_t callback);
void tmi_on_giftpaidupgrade(TmiClient *client, on_giftpaidupgrade_t callback);
void tmi_on_hosted(TmiClient *client, on_hosted_t callback);
void tmi_on_hosting(TmiClient *client, on_hosting_t callback);
void tmi_on_join(TmiClient *client, on_join_t callback);
void tmi_on_logon(TmiClient *client, on_logon_t callback);
void tmi_on_message(TmiClient *client, on_message_t callback);
void tmi_on_messagedeleted(TmiClient *client, on_messagedeleted_t callback);
void tmi_on_mod(TmiClient *client, on_mod_t callback);
void tmi_on_mods(TmiClient *client, on_mods_t callback);
void tmi_on_notice(TmiClient *client, on_notice_t callback);
void tmi_on_part(TmiClient *client, on_part_t callback);
void tmi_on_ping(TmiClient *client, on_ping_t callback);
void tmi_on_pong(TmiClient *client, on_pong_t callback);
void tmi_on_r9kbeta(TmiClient *client, on_r9kbeta_t callback);
void tmi_on_raided(TmiClient *client, on_raided_t callback);
void tmi_on_raw_message(TmiClient *client, on_raw_message_t callback);
void tmi_on_reconnect(TmiClient *client, on_reconnect_t callback);
void tmi_on_resub(TmiClient *client, on_resub_t callback);
void tmi_on_roomstate(TmiClient *client, on_roomstate_t callback);
void tmi_on_serverchange(TmiClient *client, on_serverchange_t callback);
void tmi_on_slowmode(TmiClient *client, on_slowmode_t callback);
void tmi_on_subgift(TmiClient *client, on_subgift_t callback);
void tmi_on_submysterygift(TmiClient *client, on_submysterygift_t callback);
void tmi_on_subscribers(TmiClient *client, on_subscribers_t callback);
void tmi_on_subscription(TmiClient *client, on_subscription_t callback);
void tmi_on_timeout(TmiClient *client, on_timeout_t callback);
void tmi_on_unhost(TmiClient *client, on_unhost_t callback);
void tmi_on_unmod(TmiClient *client, on_unmod_t callback);
void tmi_on_vips(TmiClient *client, on_vips_t callback);
void tmi_on_whisper(TmiClient *client, on_whisper_t callback);

#ifdef __cplusplus
}

#include <node.h>
#include <node_object_wrap.h>

namespace tmi_cxx {
    using namespace v8;

    typedef class TmixxPromise TmixxPromise;
    typedef class TmixxObject TmixxObject;
    typedef class TmixxClient TmixxClient;

    class TmixxPromise : public node::ObjectWrap {
    private:
        TmixxClient *client;
        Persistent<Object, CopyablePersistentTraits<Object>> promise;

        static void New(const FunctionCallbackInfo<Value>& args);
        static Persistent<Function> constructor;

        and_then_t cb_and_then;
        or_else_t cb_or_else;

    public:
        Isolate* isolate;
        Local<Context> context;
        Local<Object> obj;

        explicit TmixxPromise(TmixxClient *client, Isolate* isolate, Local<Context> context, Persistent<Object, CopyablePersistentTraits<Object>> promise);
        ~TmixxPromise();

        static void Init(Local<Object> exports);

        TmixxPromise *and_then(and_then_t cb);
        void or_else(or_else_t cb);
    };

    class TmixxObject : public node::ObjectWrap {
    private:
        TmixxClient *client;
        Persistent<Object, CopyablePersistentTraits<Object>> object;

        static void New(const FunctionCallbackInfo<Value>& args);
        static Persistent<Function> constructor;

    public:
        Isolate* isolate;
        Local<Context> context;
        Local<Object> obj;

        explicit TmixxObject(TmixxClient *client, Isolate* isolate, Local<Context> context, Persistent<Object, CopyablePersistentTraits<Object>> object);
        ~TmixxObject();

        static void Init(Local<Object> exports);

        TmixxObject* get_properties();

        bool is_object();
        bool is_number();
        bool is_bool();
        bool is_array();
        bool is_string();

        TmixxObject* to_object();
        double to_number();
        bool to_bool();
        TmixxObject* to_array();
        char* to_string();

        TmixxObject* operator [](size_t idx);
        TmixxObject* operator [](char* str);
    };

    class TmixxClient : public node::ObjectWrap {
    private:
        void* _userdata;
        Persistent<Object, CopyablePersistentTraits<Object>> client;

        static void New(const FunctionCallbackInfo<Value>& args);
        static Persistent<Function> constructor;

        on_action_t cb_action;
        on_anongiftpaidupgrade_t cb_anongiftpaidupgrade;
        on_ban_t cb_ban;
        on_chat_t cb_chat;
        on_cheer_t cb_cheer;
        on_clearchat_t cb_clearchat;
        on_connected_t cb_connected;
        on_connecting_t cb_connecting;
        on_disconnected_t cb_disconnected;
        on_emoteonly_t cb_emoteonly;
        on_emotesets_t cb_emotesets;
        on_followersonly_t cb_followersonly;
        on_giftpaidupgrade_t cb_giftpaidupgrade;
        on_hosted_t cb_hosted;
        on_hosting_t cb_hosting;
        on_join_t cb_join;
        on_logon_t cb_logon;
        on_message_t cb_message;
        on_messagedeleted_t cb_messagedeleted;
        on_mod_t cb_mod;
        on_mods_t cb_mods;
        on_notice_t cb_notice;
        on_part_t cb_part;
        on_ping_t cb_ping;
        on_pong_t cb_pong;
        on_r9kbeta_t cb_r9kbeta;
        on_raided_t cb_raided;
        on_raw_message_t cb_raw_message;
        on_reconnect_t cb_reconnect;
        on_resub_t cb_resub;
        on_roomstate_t cb_roomstate;
        on_serverchange_t cb_serverchange;
        on_slowmode_t cb_slowmode;
        on_subgift_t cb_subgift;
        on_submysterygift_t cb_submysterygift;
        on_subscribers_t cb_subscribers;
        on_subscription_t cb_subscription;
        on_timeout_t cb_timeout;
        on_unhost_t cb_unhost;
        on_unmod_t cb_unmod;
        on_vips_t cb_vips;
        on_whisper_t cb_whisper;

    public:
        Isolate* isolate;
        Local<Context> context;
        Local<Object> obj;

        explicit TmixxClient(Isolate* isolate, Local<Context> context, Persistent<Object, CopyablePersistentTraits<Object>> client);
        ~TmixxClient();

        static void Init(Local<Object> exports);

        void connect(void* userdata);
        void* userdata();

        TmixxPromise* action();
        TmixxPromise* ban();
        TmixxPromise* clear();
        TmixxPromise* color();
        TmixxPromise* commercial();
        TmixxPromise* deletemessage();
        TmixxPromise* disconnect();
        TmixxPromise* emoteonly();
        TmixxPromise* emoteonlyoff();
        TmixxPromise* followersonly();
        TmixxPromise* followersonlyoff();
        TmixxPromise* host();
        TmixxPromise* join();
        TmixxPromise* mod();
        TmixxPromise* mods();
        TmixxPromise* part();
        TmixxPromise* ping();
        TmixxPromise* r9kbeta();
        TmixxPromise* r9kbetaoff();
        TmixxPromise* raw();
        TmixxPromise* say(char* channel, char* msg);
        TmixxPromise* slow();
        TmixxPromise* slowoff();
        TmixxPromise* subscribers();
        TmixxPromise* subscribersoff();
        TmixxPromise* timeout();
        TmixxPromise* unban();
        TmixxPromise* unhost();
        TmixxPromise* unmod();
        TmixxPromise* unvip();
        TmixxPromise* vip();
        TmixxPromise* vips();
        TmixxPromise* whisper();

        void on_action(on_action_t callback);
        void on_anongiftpaidupgrade(on_anongiftpaidupgrade_t callback);
        void on_ban(on_ban_t callback);
        void on_chat(on_chat_t callback);
        void on_cheer(on_cheer_t callback);
        void on_clearchat(on_clearchat_t callback);
        void on_connected(on_connected_t callback);
        void on_connecting(on_connecting_t callback);
        void on_disconnected(on_disconnected_t callback);
        void on_emoteonly(on_emoteonly_t callback);
        void on_emotesets(on_emotesets_t callback);
        void on_followersonly(on_followersonly_t callback);
        void on_giftpaidupgrade(on_giftpaidupgrade_t callback);
        void on_hosted(on_hosted_t callback);
        void on_hosting(on_hosting_t callback);
        void on_join(on_join_t callback);
        void on_logon(on_logon_t callback);
        void on_message(on_message_t callback);
        void on_messagedeleted(on_messagedeleted_t callback);
        void on_mod(on_mod_t callback);
        void on_mods(on_mods_t callback);
        void on_notice(on_notice_t callback);
        void on_part(on_part_t callback);
        void on_ping(on_ping_t callback);
        void on_pong(on_pong_t callback);
        void on_r9kbeta(on_r9kbeta_t callback);
        void on_raided(on_raided_t callback);
        void on_raw_message(on_raw_message_t callback);
        void on_reconnect(on_reconnect_t callback);
        void on_resub(on_resub_t callback);
        void on_roomstate(on_roomstate_t callback);
        void on_serverchange(on_serverchange_t callback);
        void on_slowmode(on_slowmode_t callback);
        void on_subgift(on_subgift_t callback);
        void on_submysterygift(on_submysterygift_t callback);
        void on_subscribers(on_subscribers_t callback);
        void on_subscription(on_subscription_t callback);
        void on_timeout(on_timeout_t callback);
        void on_unhost(on_unhost_t callback);
        void on_unmod(on_unmod_t callback);
        void on_vips(on_vips_t callback);
        void on_whisper(on_whisper_t callback);
    };
}

#endif /* __cplusplus */

#endif /* ifndef TMI_CXX_H */
