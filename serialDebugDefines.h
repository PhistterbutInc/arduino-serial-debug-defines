
/*
  Created by Willie Phistterbut
  7-30-19 1420
  
  establishes an on/off define for serial debugging
  messages.
  
  changes standard Serial.write"debug info XXX" to
  three stages of debug; debug messsages off, normal and explicit
  using DBG_PRINT(x) and EXPDBG_PRINT(x)
  
  it's handy to deal with both levels individually,
  for instance, a DBG_PRINT("value of X is: n")
  and EXPDBG_PRINTLN("program is at line XX")
  are two examples of use.
*/

//debug info on/off
//~~~~~~~~~~~~~~~~~
#define DEBUG 0 //debug enable?
#define EXPDEBUG 0//more explicit debugging enable?

#if DEBUG // first level of debug
#define DBG_PRINT(x) Serial.print(x)
#define DBG_PRINTLN(x) Serial.println(x)
#define DBG_PRINTDEC(x) Serial.print(x,DEC)

#elif !DEBUG //no debug, print nothing
#define DBG_PRINT(x)
#define DBG_PRINTLN(x)
#define DBG_PRINTDEC(x)
#endif

#if EXPDEBUG //deal with explicit debugs
#define EXPDBG_PRINT(x) Serial.print(x)
#define EXPDBG_PRINTLN(x) Serial.println(x)

#elif !EXPDEBUG //no explicit debugs, ignore them
#define EXPDBG_PRINT(x)
#define EXPDBG_PRINTLN(x)
#endif
