include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo006_PassChar.c -o lib/libPassChar.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo006/PassChar.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo006.PassChar

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo006.PassChar

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo006_PassChar.h
	-rm -rfv lib/*
