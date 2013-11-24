/* !---- DO NOT EDIT: This file autogenerated by com/jogamp/gluegen/JavaEmitter.java on Sun Nov 24 21:20:49 CET 2013 ----! */

#include <jni.h>
#include <stdlib.h>

#include <assert.h>


/*   Java->C glue code:
 *   Java package: io.sulite.SQLiteGlue
 *    Java method: int sqlg_db_close(long db)
 *     C function: int sqlg_db_close(ptrdiff_t db);
 */
JNIEXPORT jint JNICALL 
Java_io_sulite_SQLiteGlue_sqlg_1db_1close__J(JNIEnv *env, jclass _unused, jlong db) {
  int _res;
  _res = sqlg_db_close((ptrdiff_t) db);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sulite.SQLiteGlue
 *    Java method: long sqlg_db_open(java.lang.String filename, int flags)
 *     C function: ptrdiff_t sqlg_db_open(const char *  filename, int flags);
 */
JNIEXPORT jlong JNICALL 
Java_io_sulite_SQLiteGlue_sqlg_1db_1open__Ljava_lang_String_2I(JNIEnv *env, jclass _unused, jstring filename, jint flags) {
  const char* _strchars_filename = NULL;
  ptrdiff_t _res;
  if ( NULL != filename ) {
    _strchars_filename = (*env)->GetStringUTFChars(env, filename, (jboolean*)NULL);
  if ( NULL == _strchars_filename ) {
      (*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/OutOfMemoryError"),
                       "Failed to get UTF-8 chars for argument \"filename\" in native dispatcher for \"sqlg_db_open\"");
      return 0;
    }
  }
  _res = sqlg_db_open((char *) _strchars_filename, (int) flags);
  if ( NULL != filename ) {
    (*env)->ReleaseStringUTFChars(env, filename, _strchars_filename);
  }
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sulite.SQLiteGlue
 *    Java method: long sqlg_db_prepare_st(long db, java.lang.String sql)
 *     C function: ptrdiff_t sqlg_db_prepare_st(ptrdiff_t db, const char *  sql);
 */
JNIEXPORT jlong JNICALL 
Java_io_sulite_SQLiteGlue_sqlg_1db_1prepare_1st__JLjava_lang_String_2(JNIEnv *env, jclass _unused, jlong db, jstring sql) {
  const char* _strchars_sql = NULL;
  ptrdiff_t _res;
  if ( NULL != sql ) {
    _strchars_sql = (*env)->GetStringUTFChars(env, sql, (jboolean*)NULL);
  if ( NULL == _strchars_sql ) {
      (*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/OutOfMemoryError"),
                       "Failed to get UTF-8 chars for argument \"sql\" in native dispatcher for \"sqlg_db_prepare_st\"");
      return 0;
    }
  }
  _res = sqlg_db_prepare_st((ptrdiff_t) db, (char *) _strchars_sql);
  if ( NULL != sql ) {
    (*env)->ReleaseStringUTFChars(env, sql, _strchars_sql);
  }
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sulite.SQLiteGlue
 *    Java method: int sqlg_st_bind_double(long st, int col, double val)
 *     C function: int sqlg_st_bind_double(ptrdiff_t st, int col, double val);
 */
JNIEXPORT jint JNICALL 
Java_io_sulite_SQLiteGlue_sqlg_1st_1bind_1double__JID(JNIEnv *env, jclass _unused, jlong st, jint col, jdouble val) {
  int _res;
  _res = sqlg_st_bind_double((ptrdiff_t) st, (int) col, (double) val);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sulite.SQLiteGlue
 *    Java method: int sqlg_st_bind_int(long st, int col, int val)
 *     C function: int sqlg_st_bind_int(ptrdiff_t st, int col, int val);
 */
JNIEXPORT jint JNICALL 
Java_io_sulite_SQLiteGlue_sqlg_1st_1bind_1int__JII(JNIEnv *env, jclass _unused, jlong st, jint col, jint val) {
  int _res;
  _res = sqlg_st_bind_int((ptrdiff_t) st, (int) col, (int) val);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sulite.SQLiteGlue
 *    Java method: int sqlg_st_bind_int64(long st, int col, long val)
 *     C function: int sqlg_st_bind_int64(ptrdiff_t st, int col, ptrdiff_t val);
 */
JNIEXPORT jint JNICALL 
Java_io_sulite_SQLiteGlue_sqlg_1st_1bind_1int64__JIJ(JNIEnv *env, jclass _unused, jlong st, jint col, jlong val) {
  int _res;
  _res = sqlg_st_bind_int64((ptrdiff_t) st, (int) col, (ptrdiff_t) val);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sulite.SQLiteGlue
 *    Java method: int sqlg_st_bind_text(long st, int col, java.lang.String val)
 *     C function: int sqlg_st_bind_text(ptrdiff_t st, int col, const char *  val);
 */
JNIEXPORT jint JNICALL 
Java_io_sulite_SQLiteGlue_sqlg_1st_1bind_1text__JILjava_lang_String_2(JNIEnv *env, jclass _unused, jlong st, jint col, jstring val) {
  const char* _strchars_val = NULL;
  int _res;
  if ( NULL != val ) {
    _strchars_val = (*env)->GetStringUTFChars(env, val, (jboolean*)NULL);
  if ( NULL == _strchars_val ) {
      (*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/OutOfMemoryError"),
                       "Failed to get UTF-8 chars for argument \"val\" in native dispatcher for \"sqlg_st_bind_text\"");
      return 0;
    }
  }
  _res = sqlg_st_bind_text((ptrdiff_t) st, (int) col, (char *) _strchars_val);
  if ( NULL != val ) {
    (*env)->ReleaseStringUTFChars(env, val, _strchars_val);
  }
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sulite.SQLiteGlue
 *    Java method: int sqlg_st_column_count(long st)
 *     C function: int sqlg_st_column_count(ptrdiff_t st);
 */
JNIEXPORT jint JNICALL 
Java_io_sulite_SQLiteGlue_sqlg_1st_1column_1count__J(JNIEnv *env, jclass _unused, jlong st) {
  int _res;
  _res = sqlg_st_column_count((ptrdiff_t) st);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sulite.SQLiteGlue
 *    Java method: java.lang.String sqlg_st_column_name(long st, int col)
 *     C function: const char *  sqlg_st_column_name(ptrdiff_t st, int col);
 */
JNIEXPORT jstring JNICALL 
Java_io_sulite_SQLiteGlue_sqlg_1st_1column_1name__JI(JNIEnv *env, jclass _unused, jlong st, jint col) {
  const char *  _res;
  _res = sqlg_st_column_name((ptrdiff_t) st, (int) col);
  if (NULL == _res) return NULL;
  return (*env)->NewStringUTF(env, _res);
}


/*   Java->C glue code:
 *   Java package: io.sulite.SQLiteGlue
 *    Java method: java.lang.String sqlg_st_column_text(long st, int col)
 *     C function: const char *  sqlg_st_column_text(ptrdiff_t st, int col);
 */
JNIEXPORT jstring JNICALL 
Java_io_sulite_SQLiteGlue_sqlg_1st_1column_1text__JI(JNIEnv *env, jclass _unused, jlong st, jint col) {
  const char *  _res;
  _res = sqlg_st_column_text((ptrdiff_t) st, (int) col);
  if (NULL == _res) return NULL;
  return (*env)->NewStringUTF(env, _res);
}


/*   Java->C glue code:
 *   Java package: io.sulite.SQLiteGlue
 *    Java method: int sqlg_st_column_type(long st, int col)
 *     C function: int sqlg_st_column_type(ptrdiff_t st, int col);
 */
JNIEXPORT jint JNICALL 
Java_io_sulite_SQLiteGlue_sqlg_1st_1column_1type__JI(JNIEnv *env, jclass _unused, jlong st, jint col) {
  int _res;
  _res = sqlg_st_column_type((ptrdiff_t) st, (int) col);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sulite.SQLiteGlue
 *    Java method: int sqlg_st_finish(long st)
 *     C function: int sqlg_st_finish(ptrdiff_t st);
 */
JNIEXPORT jint JNICALL 
Java_io_sulite_SQLiteGlue_sqlg_1st_1finish__J(JNIEnv *env, jclass _unused, jlong st) {
  int _res;
  _res = sqlg_st_finish((ptrdiff_t) st);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sulite.SQLiteGlue
 *    Java method: int sqlg_st_step(long st)
 *     C function: int sqlg_st_step(ptrdiff_t st);
 */
JNIEXPORT jint JNICALL 
Java_io_sulite_SQLiteGlue_sqlg_1st_1step__J(JNIEnv *env, jclass _unused, jlong st) {
  int _res;
  _res = sqlg_st_step((ptrdiff_t) st);
  return _res;
}


