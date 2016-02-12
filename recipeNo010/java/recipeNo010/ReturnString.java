/* ReturnString.java */
package recipeNo010;

public class ReturnString {

	/* This is the native method we want to call 
			not that this time we expect return value
			and we don't pass anything inside argument 
			block
	*/
	public static native java.lang.String getString();

	/* Inside static block we will load shared library */
  static {
    System.loadLibrary("ReturnString");
  }

  public static void main(String[] args) {
		/* This message will help you determine whether
				LD_LIBRARY_PATH is correctly set
		*/
    System.out.println("library: " 
			+ System.getProperty("java.library.path"));

		/* This is Java variable that will contain result */
		java.lang.String str = null;

		/* Call to shared library */
		str = ReturnString.getString();
	
		/* We can use the string inside Java */	
		System.out.println("String from C: " + str);
  }
}

