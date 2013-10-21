all: ndk-build

init:
	git submodule update --init

regen:
	java -cp gluegentools/antlr.jar:gluegentools/gluegen.jar com.jogamp.gluegen.GlueGen -I. -Ecom.jogamp.gluegen.JavaEmitter -CSQLiteGlue.cfg native/sqlg.h
	sed -i.old 's/^import/\/\/import/' java/org/sqlg/SQLiteGlue.java

# NOTE: adding v (verbose) flag for the beginning stage:
ndk-build:
	echo "Please build from SQLiteGlue-ICU-src"

