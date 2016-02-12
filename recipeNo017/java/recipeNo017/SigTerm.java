/* SigTerm.java */
package recipeNo017;

public class SigTerm {

	/* This is the native method we want to call */
	public static native void callExitCode();

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
    	SigTerm.callExitCode();
		} catch(Exception ex) {
			System.out.println("Application tried to call exit");
		}
  }
}

