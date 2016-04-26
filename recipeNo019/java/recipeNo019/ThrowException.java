/* ThrowException.java */
package recipeNo019;

import java.io.*;

public class ThrowException {

  /* This is the native method we want to call */
  public static native void throwException();

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("ThrowException");
  }

  public static void main(String[] args) {
    System.out.println("library: " + System.getProperty("java.library.path"));
    ThrowException thex = new ThrowException();
	
		try {
	    thex.throwException();
		} catch(Exception ex) {
			System.out.println("Exception was thrown in JNI");
		}

		thex.throwException();

  }
}

