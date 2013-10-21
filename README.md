# SQLiteGlue-src

Source for Android &amp; other Java native glue interface to sqlite using Gluegen.

Unlicense (public domain).

## About

SQLiteGlue provides the basic functions necessary to use sqlite from an Android or other
Java application over JNI (Java native interface). This is accomplished by using
[GlueGen](http://jogamp.org/gluegen/www/) around a simple wrapper C module.

TBD API & some internal details

# Building

**NOTE:** for this version please build in [sulite / SQLiteGlue-ICU-src](https://github.com/sulite/SQLiteGlue-ICU-src).

## Regenerage Java & C glue code

**IMPORTANT:** This must be done first:

    $ make init # Include gluegentools submodule

Then to regenerate the Java & C glue code:

    $ make regen

# Adaptations & extensions

TBD

