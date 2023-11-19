#ifndef LOOP_UV_CPP
#define LOOP_UV_CPP
#include "transports/WebsocketTransport.h"

void LoopUV::custom_log_emit_function(int level, const char* line) {
    // 在这里实现你的日志发射函数
}

void LoopUV::on_service_timer(uv_timer_t *handle) {
    // 在这里实现你的服务定时器处理函数
}

void* LoopUV::run_loop(void* arg) {
    // 在这里实现你的运行循环函数
    return nullptr;
}

int LoopUV::callback_minimal(lws* wsi, lws_callback_reasons reason, void* user, void* in, size_t len) {
    // 在这里实现你的回调函数
    return 0;
}
#endif // LOOP_UV_CPP