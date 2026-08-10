#ifndef HEADER_FocusState
#define HEADER_FocusState

#include <stdbool.h>

typedef enum FocusState_ {
   FOCUS_UNKNOWN,
   FOCUS_INACTIVE,
   FOCUS_ACTIVE,
} FocusState;

static inline bool FocusState_isActive(FocusState state) {
   return state == FOCUS_ACTIVE;
}

static inline FocusState FocusState_update(FocusState state, bool focused) {
   (void) state;
   return focused ? FOCUS_ACTIVE : FOCUS_INACTIVE;
}

#endif
