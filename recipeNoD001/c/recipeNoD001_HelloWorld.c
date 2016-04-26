#include <stdio.h>
#include "jni.h"
#include "recipeNoD001_HelloWorld.h"

/* This function will be called from Java 1000 times. We will attach
 * to JVM and break in the code. This way, we will debug JNI directly
 * from CLion
 */

JNIEXPORT int JNICALL Java_recipeNoD001_HelloWorld_displayMessage
  (JNIEnv *env, jclass obj, int value) {

    // we will increase counter each time we leave the function
    // note that we can't trace static variable value even though it's
    // accessible from LLDB console
    static int counter = 0;

    // we will print current values of _value_ so we can trace execution
    printf("Hello world from CLion! Current values of [value: %d] [counter: %d]\n", value, counter);

    // increase values; we will pass value back to Java
	value ++;
    counter ++;
	return value;

}
