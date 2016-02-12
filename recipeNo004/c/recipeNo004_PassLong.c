#include <stdio.h>
#include "jni.h"
#include "recipeNo004_PassLong.h"

JNIEXPORT void JNICALL Java_recipeNo004_PassLong_displayLong
  (JNIEnv *env, jclass obj, jlong value) {

	printf("Passed value: %ld\n", value);

}
