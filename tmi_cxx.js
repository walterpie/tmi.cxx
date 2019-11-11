const fs = require('fs');
const tmi = require('tmi.js');
const tmi_cxx = require('./build/Release/tmi_cxx.node');

const argv = process.argv.slice(2);

if (argv.length !== 3) {
    console.log(`usage: ${process.argv[0]} tmi_cxx.js BOT.so CONFIG.json SECRET.json`);
    process.exit(1);
}

const config = JSON.parse(fs.readFileSync(argv[1]));
const secret = JSON.parse(fs.readFileSync(argv[2]));

const client = new tmi.Client({
    options: {
        clientId: secret.clientId,
        debug: true,
    },
    connection: {
        secure: true,
        reconnect: true,
        maxReconnectAttempts: 5,
    },
    identity: {
        username: config.username,
        password: secret.oauth,
    },
    channels: config.channels,
});

const cxx_client = new tmi_cxx.TmixxClient(client);

tmi_cxx.start(cxx_client, argv[0]);
