#include <stdio.h>
#include "jni.h"
#include "recipeNo003_PassDouble.h"

JNIEXPORT void JNICALL Java_recipeNo003_PassDouble_displayDouble
  (JNIEnv *env, jclass obj, jdouble value) {

	printf("Passed value: %f\n", value);

}
