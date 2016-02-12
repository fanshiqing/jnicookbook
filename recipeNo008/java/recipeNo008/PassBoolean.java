/* PassBoolean.java */
package recipeNo008;

public class PassBoolean {

	/* This is the native method we want to call */
	public static native void displayBoolean(boolean value);

	/* Inside static block we will load shared library */
  static {
    System.loadLibrary("PassBoolean");
  }

  public static void main(String[] args) {
		/* This message will help you determine whether
				LD_LIBRARY_PATH is correctly set
		*/
    System.out.println("library: " 
			+ System.getProperty("java.library.path"));

		boolean flag_true = true;
		boolean flag_false = false;		

		/* Call to shared library */
    PassBoolean.displayBoolean(flag_true);
		PassBoolean.displayBoolean(flag_false);
  }
}

