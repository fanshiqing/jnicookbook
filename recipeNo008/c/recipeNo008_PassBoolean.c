#include <stdio.h>
#include "jni.h"
#include "recipeNo008_PassBoolean.h"

JNIEXPORT void JNICALL Java_recipeNo008_PassBoolean_displayBoolean
  (JNIEnv *env, jclass obj, jboolean value) {

	printf("Passed value: %s\n", value == JNI_TRUE ? "true" : "false");

}
