#include <signal.h>
#include <setjmp.h>
#include <stdlib.h>
#include "stopExit.h"

extern jmp_buf ljenv;

// this is the handler for the risky code
// if we reach here, it means somebody
// tried to call exit; this time we are declaring
// exit to be stopExit
void stopExit() {
  siglongjmp(ljenv, 1);
}

