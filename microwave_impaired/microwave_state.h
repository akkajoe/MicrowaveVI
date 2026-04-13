#ifndef MICROWAVE_STATE_H
#define MICROWAVE_STATE_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    IDLE,
    RUNNING,
    FINISHED
} microwave_state;

typedef struct {
    int remaining_time;
    microwave_state state;
} microwave_states_t;

#ifdef __cplusplus
}
#endif

#endif