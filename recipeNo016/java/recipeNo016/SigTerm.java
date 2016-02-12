/* SigTerm.java */
package recipeNo016;

public class SigTerm {

  /* This is the native method we want to call */
  public static native void callExitCode();

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("SigTerm");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
        LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " 
      + System.getProperty("java.library.path"));

    /* Call to shared library */
    try {
      // We are surrounding with try - catch.
      // JNI will throw exception when exit function is called.
      System.out.println("Calling riskyCode() with atexit based handler");
      SigTerm.callExitCode();
    } catch(Exception ex) {
      // We will end up here catching exception produced by JNI.
      System.out.println("Exception - application tried to call exit");
    }
  }
}

