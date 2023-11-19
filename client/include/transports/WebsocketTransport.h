

#ifndef LOOP_UV_H
#define LOOP_UV_H
extern "C"
{
#include <libwebsockets.h>
#include <uv.h>
}

#include <ctime>
#include <pthread.h>

class LoopUV
{
private:
    uv_timer_t service_timer;
    lws *global_wsi = nullptr;
    lws_context *global_context;
    lws_client_connect_info connect_info = {0};
    char buffer[20];
    time_t rawtime;
    tm *timeinfo;
public:
    

    void custom_log_emit_function(int level, const char *line);
    void on_service_timer(uv_timer_t *handle);
    void *run_loop(void *arg);
    int callback_minimal(lws *wsi, lws_callback_reasons reason, void *user, void *in, size_t len);
};
 

#endif // LOOP_UV_H