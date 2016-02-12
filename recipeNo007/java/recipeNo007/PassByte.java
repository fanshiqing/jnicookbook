/* PassByte.java */
package recipeNo007;

public class PassByte {

	/* This is the native method we want to call */
	public static native void displayByte(byte value);

	/* Inside static block we will load shared library */
  static {
    System.loadLibrary("PassByte");
  }

  public static void main(String[] args) {
		/* This message will help you determine whether
				LD_LIBRARY_PATH is correctly set
		*/
    System.out.println("library: " 
			+ System.getProperty("java.library.path"));
		
		byte value_max = 127;	// max
		byte value_min = -128; // min

		/* Call to shared library */
    PassByte.displayByte(value_min);
		PassByte.displayByte(value_max);
  }
}

