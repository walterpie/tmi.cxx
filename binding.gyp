{
  "targets": [
    {
      "target_name": "tmi_cxx",
      "sources": [
        "src/main.cpp",
        "src/tmi_cxx.cpp"
      ],
      "include_dirs": [
        "<!@(node -p \"require('node-addon-api').include\")"
      ],
      "dependencies": [
        "<!(node -p \"require('node-addon-api').gyp\")"
      ],
      "cflags!": ["-fno-exceptions", "-I../include"],
      "cflags_cc!": ["-fno-exceptions", "-I../include"],
      "defines": ["NAPI_CPP_EXCEPTIONS"]
    }
  ]
}
