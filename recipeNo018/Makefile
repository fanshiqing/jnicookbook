include ../Makefile.common

all: compilejava compilec

reloadlib:
	cc -g -shared -fpic c/foo.c -o lib/libReloadLib.$(EXT) -install_name libReloadLib.$(EXT)

compilec:
	# This is the final library for JNI calls
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) -rpath @loader_path c/recipeNo018_ReloadLib.c -o lib/libReloadLibJNI.$(EXT) 

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo018/ReloadLib.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo018.ReloadLib

test:	reloadlib
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo018.ReloadLib

clean:
	-rm -rfv target/*
	-rm c/recipeNo018_ReloadLib.h
	-rm -rf lib/*
