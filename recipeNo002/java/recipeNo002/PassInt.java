/* PassInt.java */
package recipeNo002;

public class PassInt {

	/* This is the native method we want to call */
	public static native void displayInt(int value);

	/* Inside static block we will load shared library */
  static {
    System.loadLibrary("PassInt");
  }

  public static void main(String[] args) {
		/* This message will help you determine whether
				LD_LIBRARY_PATH is correctly set
		*/
    System.out.println("library: " 
			+ System.getProperty("java.library.path"));

		/* Call to shared library */
    PassInt.displayInt(1);
  }
}

