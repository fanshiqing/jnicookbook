/* recipeNo019_ThrowException.c */
#include <stdio.h>
#include <stdlib.h>
#include "recipeNo019_ThrowException.h"

JNIEXPORT void JNICALL Java_recipeNo019_ThrowException_throwException
	(JNIEnv *env, jobject obj) {

	char exceptionBuffer[1024];
  sprintf(exceptionBuffer, "Error");
  (*env)->ThrowNew(   env,
    (*env)->FindClass(env, "java/lang/Exception"),
                      exceptionBuffer);	

}
