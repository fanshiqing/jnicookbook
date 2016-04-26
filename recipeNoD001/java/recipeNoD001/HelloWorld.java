/* HelloWorld.java 
   Sample for debugging with CLion
*/
package recipeNoD001;

public class HelloWorld {

	/* This is the native method we want to call */
	public static native int displayMessage(int value);

	/* Inside static block we will load shared library */
        static {
          System.loadLibrary("JNIDebugCLion"); 
	}

        public static void main(String[] args) throws Exception {
	/* This message will help you determine whether
	LD_LIBRARY_PATH is correctly set
	*/
    	System.out.println("library: " 
			+ System.getProperty("java.library.path"));

	int i = 0;
	while(i < 1000) {
		i = HelloWorld.displayMessage(i);
      		Thread.sleep(1000);
    	}
  }
}

