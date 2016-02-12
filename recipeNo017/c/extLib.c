#include <stdlib.h>
#include <stdio.h>

// the purpose of this code is to call exit function
// we pretend that library was compiled with unknown
// settings and is a black box from ou perspective
void externalRiskyCode() {
  printf("Calling exit from C code\n");
  exit(1);
}
