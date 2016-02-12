include ../Makefile.common

all: compilejava compilec

compilec:
	# This compilation pretends that we work with binary lib that we can't compile
	cc -g -shared -fpic c/extLib.c -o lib/libExtLib.$(EXT)

	# This is just a handler to exit (our new implementation of exit)
	cc -g -shared -fpic c/stopExit.c -o lib/libStopExit.$(EXT)
	
	# This compilation pretends that we work with library we can compile from the sources
	# We have to add -Dexit and we have to add library with new exit call handler
	cc -Dexit=stopExit -g -shared -fpic c/extLibCompiled.c -Llib -lStopExit -o lib/libExtLibCompiled.$(EXT)
	# This is the final library for JNI calls
	cc -Dexit=stopExit -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo017_SigTerm.c -Llib -lExtLib -lExtLibCompiled -lStopExit -o lib/libSigTerm.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo017/SigTerm.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo017.SigTerm
	$(JAVA_HOME)/bin/javac -d target java/recipeNo017/SigTermExtLib.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo017.SigTermExtLib

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo017.SigTerm
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo017.SigTermExtLib

clean:
	-rm -rfv target/*
	-rm c/recipeNo017_SigTerm.h
	-rm c/recipeNo017_SigTermExtLib.h
	-rm -rf lib/*
