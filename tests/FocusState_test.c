#include "../FocusState.h"

#include <assert.h>

int main(void) {
   FocusState state = FocusState_initial();

   assert(FocusState_isActive(state));
   assert(FocusState_nextAction(state) == FOCUS_WORK_THEN_READ);
   state = FocusState_update(state, false);
   assert(!FocusState_isActive(state));
   assert(FocusState_nextAction(state) == FOCUS_READ_ONLY);
   state = FocusState_update(state, true);
   assert(FocusState_isActive(state));
   assert(FocusState_nextAction(state) == FOCUS_WORK_THEN_READ);

   return 0;
}
