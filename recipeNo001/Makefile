ARCH=$(shell uname -s | tr '[:upper:]' '[:lower:]')
ifeq ($(ARCH),darwin)
  EXT=dylib
else
  EXT=so
endif

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo001_HelloWorld.c -o lib/libHelloWorld.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo001/HelloWorld.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo001.HelloWorld

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo001.HelloWorld

clean:
	rm -rf taget/*
	rm c/recipeNo001_HelloWorld.h
	rm -rf lib/*
