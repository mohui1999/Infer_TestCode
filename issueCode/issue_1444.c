#include <stdio.h>

#define SRC_STR "0123456789abcdef0123456789abcde"

typedef struct _charVoid
{
    char charFirst[16];
    void * voidSecond;
} charVoid;

char global_aaa[16];

void t1() {
    charVoid structCharVoid;
    memcpy(structCharVoid.charFirst, SRC_STR, sizeof(structCharVoid));
}

void t2() {
    charVoid structCharVoid;
    memcpy(global_aaa, SRC_STR, sizeof(structCharVoid));
}

void t3() {
    char local_aaa[16];
    charVoid structCharVoid;
    memcpy(local_aaa, SRC_STR, sizeof(structCharVoid));
}