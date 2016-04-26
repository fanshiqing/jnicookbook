/* ReloadLib.java */
package recipeNo018;

import java.io.*;

public class ReloadLib {

  /* This is the native method we want to call */
  public static native void displayMessage();

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("ReloadLibJNI");
  }

  public static void main(String[] args) {
    System.out.println("library: " + System.getProperty("java.library.path"));
    ReloadLib reloadLib = new ReloadLib();
    reloadLib.displayMessage();

    System.out.println("Before you enter text recompile library.");
    System.out.println("To do so, change the code inside foo.c and create library.");
    System.out.println("After file is changed, call: make lib");

    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String line = null;

    try {
      line = br.readLine();
    } catch (IOException ioe) {
      System.out.println("IO error trying to read string!");
      System.exit(1);
    }

    reloadLib.displayMessage();
  }
}

