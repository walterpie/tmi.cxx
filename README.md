# tmi.cxx

A C/C++ interface to tmi.js.

## Usage

 - Import this repository either as a git submodule or by simply copying it into your project.
 - Make sure `tmi.js` is in your `node_modules` using `npm install tmi.js`.
 - Build tmi.cxx using `node-gyp configure` and `node-gyp build`.
 - Build your own twitch bot using a make system of choice, as a shared library.  Note that your binary needs to
    dynamicaly link to the shared library found in `tmi_cxx/build/Release/tmi_cxx.node`.
 - Run tmi.cxx by calling the following:
```
node tmi_cxx/tmi_cxx.js BOT.so CONFIG.json SECRET.json
```
    where `BOT.so` should be replaced by the path to your shared library, `CONFIG.json` should be replaced by a path to
    the configuration json (see example below) and finally `SECRET.json` should be replaced by a path to your secret
    json (see example below).

## Example

This example can also be found on [`gitlab.com/pi_pi3/tmi_example`](https://gitlab.com/pi_pi3/tmi_example).

test.c
```
#include <stdio.h>
#include "tmi_cxx.h"

void catch_err(TmiClient *client, TmiObject *reason) {
    printf("error\n");
}

void on_message(TmiClient *client, char *channel, TmiObject *userstate, char *msg, int self) {
    if (self) {
        return;
    }
    TmiPromise *hi_promise = tmi_client_say(client, "my_channel", "hi");
    tmi_promise_or_else(hi_promise, catch_err);
}

void tmicxx_main(TmiClient *client) {
    tmi_connect(client);
    tmi_on_message(client, on_message);
}
```

config.json
```
{
    "username": "my_channel",
    "channels": ["my_bot_username"]
}
```

secret.json
```
{
    "clientId": "my_client_id",
    "oauth": "oauth:my_oauth"
}
```
