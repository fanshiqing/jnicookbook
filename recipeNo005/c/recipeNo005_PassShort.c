#include <stdio.h>
#include "jni.h"
#include "recipeNo005_PassShort.h"

JNIEXPORT void JNICALL Java_recipeNo005_PassShort_displayShort
  (JNIEnv *env, jclass obj, jshort value) {

	printf("Passed value: %hd\n", value);

}
