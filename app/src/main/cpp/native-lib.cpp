#include <jni.h>
#include "demo.h"

extern "C"
jint
Java_com_yys_cheshijni_MainActivity_stringFromJNI(
    JNIEnv *env,
    jobject /* this */) {
  int a = num(5,4);
  return a;
}
