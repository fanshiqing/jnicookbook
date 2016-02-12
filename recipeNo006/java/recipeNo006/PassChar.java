/* PassChar.java */
package recipeNo006;

public class PassChar {

	/* This is the native method we want to call */
	public static native void displayChar(char value);

	/* Inside static block we will load shared library */
  static {
    System.loadLibrary("PassChar");
  }

  public static void main(String[] args) {
		/* This message will help you determine whether
				LD_LIBRARY_PATH is correctly set
		*/
    System.out.println("library: " 
			+ System.getProperty("java.library.path"));
		
		char value = 'a';

		/* Call to shared library */
    PassChar.displayChar(value);
  }
}

