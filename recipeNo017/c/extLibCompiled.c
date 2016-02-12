#include <stdlib.h>
#include <stdio.h>

void stopExit();

// In this case we have an access to source code
// We can compile is using settings that suit us best
void externalRiskyCodeCompiled() {
  printf("Calling exit from C code that we have compiled\n");
  exit(1);
}
