include ../Makefile.common

all: compilejava compilec

compilec:
	# This is the final library for JNI calls
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo019_ThrowException.c -o lib/libThrowException.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo019/ThrowException.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo019.ThrowException

test:	compilec compilejava
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo019.ThrowException

clean:
	-rm -rfv target/*
	-rm c/recipeNo019_ThrowException.h
	-rm -rf lib/*
