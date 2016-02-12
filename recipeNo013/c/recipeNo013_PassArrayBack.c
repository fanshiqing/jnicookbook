#include <stdio.h>
#include "jni.h"
#include "recipeNo013_PassArrayBack.h"

JNIEXPORT void JNICALL Java_recipeNo013_PassArrayBack_passBooleanArray
  (JNIEnv *env, jclass obj, jbooleanArray array) {

	/* get size of the array */
	jsize len = (*env)->GetArrayLength(env, array);
	
	/* get the body of array; it will be referecende by C pointer */
  jboolean *body = (*env)->GetBooleanArrayElements(env, array, 0);

	/* do some stuff */
  for(int i=0; i < len; i++) {
    printf("Boolean value: %s\n", body[i] == JNI_TRUE ? "true" : "false");
		
		/* update value */
		body[i] = 0;
	}

	/* release body when you decide it is no longer needed 
		Do not pass changes back to Java */
  (*env)->ReleaseBooleanArrayElements(env, array, body, JNI_ABORT);
}

JNIEXPORT void JNICALL Java_recipeNo013_PassArrayBack_passByteArray
  (JNIEnv *env, jclass obj, jbyteArray array) {

	/* get size of the array */
	jsize len = (*env)->GetArrayLength(env, array);

	/* get the body of array; it will be referecende by C pointer */
  jbyte *body = (*env)->GetByteArrayElements(env, array, 0);

	/* do some stuff */
  for(int i=0; i < len; i++) {
  	printf("Byte value: %d\n", body[i]);
		
		/* update value */
		body[i] = 0;
	}

	/* release body when you decide it is no longer needed 
		Pass changes back to Java */
  (*env)->ReleaseByteArrayElements(env, array, body, JNI_COMMIT);
}

JNIEXPORT void JNICALL Java_recipeNo013_PassArrayBack_passCharArray
  (JNIEnv *env, jclass obj, jcharArray array) {

	/* get size of the array */
	jsize len = (*env)->GetArrayLength(env, array);

	/* get the body of array; it will be referecende by C pointer */
  jchar *body = (*env)->GetCharArrayElements(env, array, 0);

	/* do some stuff */
  for(int i=0; i < len; i++) {
  	printf("Char value: %c\n", body[i]);
		
		/* update value */
		body[i] = 0;
	}

	/* release body when you decide it is no longer needed
		Do not pass changes back to Java */
  (*env)->ReleaseCharArrayElements(env, array, body, JNI_ABORT);
}

JNIEXPORT void JNICALL Java_recipeNo013_PassArrayBack_passShortArray
  (JNIEnv *env, jclass obj, jshortArray array) {

	/* get size of the array */
	jsize len = (*env)->GetArrayLength(env, array);

	/* get the body of array; it will be referecende by C pointer */
  jshort *body = (*env)->GetShortArrayElements(env, array, 0);

	/* do some stuff */
  for(int i=0; i < len; i++) {
		printf("Short value: %hd\n", body[i]);
		
		/* update value */
		body[i] = 0;
  }

	/* release body when you decide it is no longer needed
		Pass changes back to Java */
  (*env)->ReleaseShortArrayElements(env, array, body, JNI_COMMIT);
}

JNIEXPORT void JNICALL Java_recipeNo013_PassArrayBack_passIntArray
  (JNIEnv *env, jclass obj, jintArray array) {
	
	/* get size of the array */
	jsize len = (*env)->GetArrayLength(env, array);

	/* get the body of array; it will be referecende by C pointer */
  jint *body = (*env)->GetIntArrayElements(env, array, 0);

	/* do some stuff */
  for(int i=0; i < len; i++) {
    printf("Int value: %d\n", body[i]);
	
		/* update value */
		body[i] = 0;
  }

	/* release body when you decide it is no longer needed 
		Do not pass changes back to Java */
  (*env)->ReleaseIntArrayElements(env, array, body, JNI_ABORT);
}

JNIEXPORT void JNICALL Java_recipeNo013_PassArrayBack_passLongArray
  (JNIEnv *env, jclass obj, jlongArray array) {

	/* get size of the array */
	jsize len = (*env)->GetArrayLength(env, array);

	/* get the body of array; it will be referecende by C pointer */
  jlong *body = (*env)->GetLongArrayElements(env, array, 0);

	/* do some stuff */
  for(int i=0; i < len; i++) {
    printf("Long value: %ld\n", body[i]);
	
		/* update value */
		body[i] = 0;
  }

	/* release body when you decide it is no longer needed
		Pass changes back to Java */
  (*env)->ReleaseLongArrayElements(env, array, body, JNI_COMMIT);
}

JNIEXPORT void JNICALL Java_recipeNo013_PassArrayBack_passFloatArray
  (JNIEnv *env, jclass obj, jfloatArray array) {

	/* get size of the array */
	jsize len = (*env)->GetArrayLength(env, array);

	/* get the body of array; it will be referecende by C pointer */
  jfloat *body = (*env)->GetFloatArrayElements(env, array, 0);

	/* do some stuff */
  for(int i=0; i < len; i++) {
    printf("Float value: %f\n", body[i]);

		/* update value */
		body[i] = 0;
  }

	/* release body when you decide it is no longer needed 
		Do not pass changes back to Java */
  (*env)->ReleaseFloatArrayElements(env, array, body, JNI_ABORT);
}

JNIEXPORT void JNICALL Java_recipeNo013_PassArrayBack_passDoubleArray
  (JNIEnv *env, jclass obj, jdoubleArray array) {

	/* get size of the array */
	jsize len = (*env)->GetArrayLength(env, array);
	
	/* get the body of array; it will be referecende by C pointer */
  jdouble *body = (*env)->GetDoubleArrayElements(env, array, 0);

	/* do some stuff */
  for(int i=0; i < len; i++) {
    printf("Double value: %f\n", body[i]);

		/* update value */
		body[i] = 0;
  }

	/* release body when you decide it is no longer needed 
		Pass changes back to Java */
  (*env)->ReleaseDoubleArrayElements(env, array, body, JNI_COMMIT);
}

