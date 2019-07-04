
/*
  Created by Willie Phistterbut
  7-30-19 1420
  
  establishes an on/off define for serial debugging.
  changes standard Serial.write"debug info XXX"
  to seperate stages of debug; explicit and quiet
  using DBG_PRINT(x) and EXPDBG_PRINT(x)
*/



//debug info on/off
//~~~~~~~~~~~~~~~~~
#define DEBUG 0 //debug or not
#define EXPDEBUG 0//more explicit debugging

#if DEBUG == 1
#define DBG_PRINT(x) Serial.print(x)
#define DBG_PRINTLN(x) Serial.println(x)
#define DBG_PRINTDEC(x) Serial.print(x,DEC)

#elif !DEBUG //no debug, print nothing
#define DBG_PRINT(x)
#define DBG_PRINTLN(x)
#define DBG_PRINTDEC(x)
#endif

#if EXPDEBUG == 1
#define EXPDBG_PRINT(x) Serial.print(x)
#define EXPDBG_PRINTLN(x) Serial.println(x)
#elif !EXPDEBUG
#define EXPDBG_PRINT(x)
#define EXPDBG_PRINTLN(x)
#endif
