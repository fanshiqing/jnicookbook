#include <stdio.h>
#include "jni.h"
#include "recipeNo010_ReturnString.h"

JNIEXPORT jstring JNICALL Java_recipeNo010_ReturnString_getString
  (JNIEnv *env, jclass obj) {

	// we want to pass character based string
	// defined in C back to Java
	char buffer[] = "This is a sample string";
	
	// we have to make sure that string will be wrapped
	// within jstring structure
	return (*env)->NewStringUTF(env, buffer);
}
