/* ReturnPrimitive.java */
package recipeNo011;

public class ReturnPrimitive {

	/* This are the native methods we want to call 
			note that this time we expect return value
			and we don't pass anything inside argument 
			block
	*/
	public static native boolean getBoolean();
	public static native byte getByte();
	public static native char getChar();
	public static native short getShort();
	public static native int getInt();
	public static native long getLong();
	public static native float getFloat();
	public static native double getDouble();

	/* Inside static block we will load shared library */
  static {
    System.loadLibrary("ReturnPrimitive");
  }

  public static void main(String[] args) {
		/* This message will help you determine whether
				LD_LIBRARY_PATH is correctly set
		*/
    System.out.println("library: " 
			+ System.getProperty("java.library.path"));

		/* Call to shared library */
		boolean boolVal = ReturnPrimitive.getBoolean();
		byte 		byteVal = ReturnPrimitive.getByte();
		char		charVal = ReturnPrimitive.getChar();
		short		shortVal = ReturnPrimitive.getShort();
		int			intVal = ReturnPrimitive.getInt();
		long		longVal = ReturnPrimitive.getLong();
		float		floatVal = ReturnPrimitive.getFloat();
		double	doubleVal = ReturnPrimitive.getDouble();
	
		/* We can use results inside Java */	
		System.out.println("Boolean from C: " + boolVal);
		System.out.println("Byte from C: " + byteVal);
		System.out.println("Char from C: " + charVal);
		System.out.println("Short from C: " + shortVal);
		System.out.println("Int from C: " + intVal);
		System.out.println("Long from C: " + longVal);
		System.out.println("Float from C: " + floatVal);
		System.out.println("Double from C: " + doubleVal);
  }
}

