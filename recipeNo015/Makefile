include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo015_SigSegv.c -o lib/libSigSegv.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo015/SigSegv.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo015.SigSegv
	$(JAVA_HOME)/bin/javac -d target java/recipeNo015/SigSegvNoHandler.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo015.SigSegvNoHandler

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo015.SigSegv
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo015.SigSegvNoHandler

clean:
	-rm -rfv target/*
	-rm c/recipeNo015_SigSegv.h
	-rm c/recipeNo015_SigSegvNoHandler.h
	-rm -rf lib/*
