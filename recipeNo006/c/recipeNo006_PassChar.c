#include <stdio.h>
#include "jni.h"
#include "recipeNo006_PassChar.h"

JNIEXPORT void JNICALL Java_recipeNo006_PassChar_displayChar
  (JNIEnv *env, jclass obj, jchar value) {

	printf("Passed value: %c\n", value);

}
