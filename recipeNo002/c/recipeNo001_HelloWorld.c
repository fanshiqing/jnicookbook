#include <stdio.h>
#include "jni.h"
#include "recipeNo001_HelloWorld.h"

JNIEXPORT void JNICALL Java_recipeNo001_HelloWorld_displayMessage
  (JNIEnv *env, jclass obj) {

	printf("Hello world!\n");

}
