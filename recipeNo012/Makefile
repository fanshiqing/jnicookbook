include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo012_PassArray.c -o lib/libPassArray.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo012/PassArray.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo012.PassArray

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo012.PassArray

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo012_PassArray.h
	-rm -rfv lib/*
