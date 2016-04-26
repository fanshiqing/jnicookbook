include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -O0 -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNoD001_HelloWorld.c -o lib/libJNIDebugCLion.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNoD001/HelloWorld.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNoD001.HelloWorld

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=./lib -cp target recipeNoD001.HelloWorld

clean:
	-rm -rfv target/*
	-rm c/recipeNoD001_HelloWorld.h
	-rm -rf lib/*
