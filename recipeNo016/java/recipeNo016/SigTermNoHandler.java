/* SigTermNoHandler.java */
package recipeNo016;

public class SigTermNoHandler {

	/* This is the native method we want to call */
	public static native void callExitCodeNoHandler();

	/* Inside static block we will load shared library */
  static {
    System.loadLibrary("SigTerm");
  }

  public static void main(String[] args) {
		/* This message will help you determine whether
				LD_LIBRARY_PATH is correctly set
		*/
    System.out.println("library: " 
			+ System.getProperty("java.library.path"));

		/* Call to shared library */
		try {
			// We are surrounding with try - catch, but it is hopeles.
			// JNI will not throw exception this time.
			System.out.println("Calling riskyCode() without atexit based handler");
    	SigTermNoHandler.callExitCodeNoHandler();
		} catch(Exception ex) {
			// We will never reach this code.
			// Instead, JVM will finish with exit(1) code
			System.out.println("Exception - application tried to call exit");
		}
  }
}

