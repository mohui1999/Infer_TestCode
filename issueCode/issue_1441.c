#include <stdio.h>

void original(size_t len, const unsigned char *in, unsigned char *out) {
    size_t n = 0;
    in = NULL;
    while (len) {
        for (n = 0; n < 16 && n < len; ++n)
            out[n] = in[n];
        len -= 16;
    }
}

void test1_1(size_t len) {
    const unsigned char *in = NULL;
    while (len) {
        * in;
        len--;
    }
}

void test1_2(size_t len) {
    const unsigned char *in = NULL;
    while (len && len) {
        * in;
        len--;
    }
}

void test1_3(size_t len) {
    const unsigned char *in = NULL;
    while (len && len < 16) {
        * in;
        len--;
    }
}


void test2_1(size_t len) {
    const unsigned char *in = NULL;
    for (;len;) {
        * in;
        len--;
    }
}

void test2_2(size_t len) {
    const unsigned char *in = NULL;
    for (;len && len;) {
        * in;
        len--;
    }
}

void test2_3(size_t len) {
    const unsigned char *in = NULL;
    for (;len && len < 16;) {
        * in;
        len--;
    }
}