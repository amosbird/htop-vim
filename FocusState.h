#ifndef HEADER_FocusState
#define HEADER_FocusState

#include <stdbool.h>

typedef enum FocusAction_ {
   FOCUS_READ_ONLY,
   FOCUS_WORK_THEN_READ,
} FocusAction;

typedef enum FocusState_ {
   FOCUS_UNKNOWN,
   FOCUS_INACTIVE,
   FOCUS_ACTIVE,
} FocusState;

static inline bool FocusState_isActive(FocusState state) {
   return state == FOCUS_ACTIVE;
}

static inline FocusAction FocusState_nextAction(FocusState state) {
   return FocusState_isActive(state) ? FOCUS_WORK_THEN_READ : FOCUS_READ_ONLY;
}

static inline FocusState FocusState_update(FocusState state, bool focused) {
   (void) state;
   return focused ? FOCUS_ACTIVE : FOCUS_INACTIVE;
}

#endif
