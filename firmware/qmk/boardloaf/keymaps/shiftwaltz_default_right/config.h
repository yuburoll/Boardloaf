#pragma once

#ifndef HOLD_ON_OTHER_KEY_PRESS_PER_KEY
    #define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#endif

#ifndef PERMISSIVE_HOLD_PER_KEY
    #define PERMISSIVE_HOLD_PER_KEY
#endif

#ifndef CHORDIAL_HOLD
    #define CHORDAL_HOLD
#endif

#ifdef MASTER_LEFT
    #undef MASTER_LEFT
#endif
#ifdef MASTER_RIGHT
    #undef MASTER_RIGHT
#endif
#define MASTER_RIGHT