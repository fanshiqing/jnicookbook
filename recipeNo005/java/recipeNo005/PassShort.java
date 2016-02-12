/* PassShort.java */
package recipeNo005;

public class PassShort {

	/* This is the native method we want to call */
	public static native void displayShort(short value);

	/* Inside static block we will load shared library */
  static {
    System.loadLibrary("PassShort");
  }

  public static void main(String[] args) {
		/* This message will help you determine whether
				LD_LIBRARY_PATH is correctly set
		*/
    System.out.println("library: " 
			+ System.getProperty("java.library.path"));
		
		short value = 1234;

		/* Call to shared library */
    PassShort.displayShort(value);
  }
}

