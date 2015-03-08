include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo002_PassInt.c -o lib/libPassInt.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo002/PassInt.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo002.PassInt

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo002.PassInt

clean:
	rm -rf taget/*
	rm c/recipeNo002_PassInt.h
	rm -rf lib/*
