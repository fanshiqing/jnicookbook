all: test

test: compilejava compilec

compilec:
	cc -g -shared -fpic -I/Library/Java/JavaVirtualMachines/jdk1.8.0.jdk/Contents/Home/include/ -I/Library/Java/JavaVirtualMachines/jdk1.8.0.jdk/Contents/Home/include/darwin c/recipeNo001_HelloWorld.c -o lib/libHelloWorld.dylib	

compilejava:
	javac -d target java/recipeNo001/HelloWorld.java
	javah -jni -d c -cp target recipeNo001.HelloWorld

test:
	java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo001.HelloWorld

clean:
	rm -rf taget/*
	rm c/recipeNo001_HelloWorld.h
	rm -rf lib/*
