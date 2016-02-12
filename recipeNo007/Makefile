include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo007_PassByte.c -o lib/libPassByte.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo007/PassByte.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo007.PassByte

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo007.PassByte

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo007_PassByte.h
	-rm -rfv lib/*
