/* PassDouble.java */
package recipeNo003;

public class PassDouble {

	/* This is the native method we want to call */
	public static native void displayDouble(double value);

	/* Inside static block we will load shared library */
  static {
    System.loadLibrary("PassDouble");
  }

  public static void main(String[] args) {
		/* This message will help you determine whether
				LD_LIBRARY_PATH is correctly set
		*/
    System.out.println("library: " 
			+ System.getProperty("java.library.path"));

		/* Call to shared library */
    PassDouble.displayDouble(1.0);
  }
}

