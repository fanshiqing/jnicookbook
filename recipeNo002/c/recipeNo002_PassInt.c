#include <stdio.h>
#include "jni.h"
#include "recipeNo002_PassInt.h"

JNIEXPORT void JNICALL Java_recipeNo002_PassInt_displayInt
  (JNIEnv *env, jclass obj, jint value) {

	printf("Passed value: %d\n", value);

}
