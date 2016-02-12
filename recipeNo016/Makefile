include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic c/externalLib.c -o lib/libExternalLib.$(EXT)
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) -Llib -lExternalLib c/recipeNo016_SigTerm.c -o lib/libSigTerm.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo016/SigTerm.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo016.SigTerm
	$(JAVA_HOME)/bin/javac -d target java/recipeNo016/SigTermNoHandler.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo016.SigTermNoHandler

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo016.SigTerm
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo016.SigTermNoHandler

clean:
	-rm -rfv target/*
	-rm c/recipeNo016_SigTerm.h
	-rm c/recipeNo016_SigTermNoHandler.h
	-rm -rf lib/*
