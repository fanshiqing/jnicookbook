include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo011_ReturnPrimitive.c -o lib/libReturnPrimitive.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo011/ReturnPrimitive.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo011.ReturnPrimitive

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo011.ReturnPrimitive

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo011_ReturnPrimitive.h
	-rm -rfv lib/*
