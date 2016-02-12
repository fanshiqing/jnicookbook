#include <stdio.h>
#include "jni.h"
#include "recipeNo007_PassByte.h"

JNIEXPORT void JNICALL Java_recipeNo007_PassByte_displayByte
  (JNIEnv *env, jclass obj, jbyte value) {

	printf("Passed value: %d\n", value);

}
