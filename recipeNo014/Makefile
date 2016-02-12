include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo014_CreateArray.c -o lib/libCreateArray.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo014/CreateArray.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo014.CreateArray

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo014.CreateArray

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo014_CreateArray.h
	-rm -rfv lib/*
