/* recipeNo018_ReloadLib.c */
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include "recipeNo018_ReloadLib.h"
#include "foo.h"


JNIEXPORT void JNICALL Java_recipeNo018_ReloadLib_displayMessage
	(JNIEnv *env, jobject obj) {

   /* dynamic library will be handled
      by the variables below
   */
   void *lib_handle;
   void (*fn)();
   char *error;

   /* make sure to put libfoo on the LIBRARY_PATH */
   lib_handle = dlopen("libReloadLib.dylib", RTLD_NOW);
   if (!lib_handle) {
      fprintf(stderr, "%s\n", dlerror());
      exit(1);
   }

   /* get the location of the given function inside library
     we will use it later on to call the function
   */
   fn = dlsym(lib_handle, "foo");
   if ((error = dlerror()) != NULL) {
      fprintf(stderr, "%s\n", error);
      exit(1);
   }

   /* call the function from external library */
   (*fn)();

   /* close shared library
     and check the error code
   */
   int result = dlclose(lib_handle);
   if (((error = dlerror()) != NULL) || result != 0) {
      fprintf(stderr, "%s\n", error);
      exit(1);
   }
}
