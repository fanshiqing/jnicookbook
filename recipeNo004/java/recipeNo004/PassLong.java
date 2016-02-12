/* PassLong.java */
package recipeNo004;

public class PassLong {

	/* This is the native method we want to call */
	public static native void displayLong(long value);

	/* Inside static block we will load shared library */
  static {
    System.loadLibrary("PassLong");
  }

  public static void main(String[] args) {
		/* This message will help you determine whether
				LD_LIBRARY_PATH is correctly set
		*/
    System.out.println("library: " 
			+ System.getProperty("java.library.path"));
		
		long value = 1234;

		/* Call to shared library */
    PassLong.displayLong(value);
  }
}

