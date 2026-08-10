#include "../FocusState.h"

#include <assert.h>

int main(void) {
   FocusState state = FOCUS_UNKNOWN;

   assert(!FocusState_isActive(state));
   state = FocusState_update(state, true);
   assert(FocusState_isActive(state));
   state = FocusState_update(state, false);
   assert(!FocusState_isActive(state));

   return 0;
}
