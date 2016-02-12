#include <stdio.h>
#include "jni.h"
#include "recipeNo009_PassString.h"

JNIEXPORT void JNICALL Java_recipeNo009_PassString_displayString
  (JNIEnv *env, jclass obj, jstring str) {

	// we have to get string bytes into C string
	const char *c_str;
	c_str = (*env)->GetStringUTFChars(env, str, NULL);
	if(c_str == NULL) {
		return;
	}
	
	printf("Passed string: %s\n", c_str);

	// after using it, remember to release the memory
	(*env)->ReleaseStringUTFChars(env, str, c_str);
}
