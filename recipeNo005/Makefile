include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo005_PassShort.c -o lib/libPassShort.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo005/PassShort.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo005.PassShort

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo005.PassShort

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo005_PassShort.h
	-rm -rfv lib/*
