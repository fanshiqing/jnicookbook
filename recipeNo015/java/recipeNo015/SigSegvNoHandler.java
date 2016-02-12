/* SigSegvNoHandler.java */
package recipeNo015;

public class SigSegvNoHandler {

	/* This is the native method we want to call */
	public static native void callRiskyCodeNoHandler();

	/* Inside static block we will load shared library */
  static {
    System.loadLibrary("SigSegv");
  }

  public static void main(String[] args) {
		/* This message will help you determine whether
				LD_LIBRARY_PATH is correctly set
		*/
    System.out.println("library: " 
			+ System.getProperty("java.library.path"));

		/* Call to shared library */
		try {
    	SigSegvNoHandler.callRiskyCodeNoHandler();
		} catch(Exception ex) {
			System.out.println("Call to callRiskyCodeNoHandler() finished with exception");
		}
  }
}

