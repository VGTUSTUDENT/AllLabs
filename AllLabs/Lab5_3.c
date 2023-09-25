#include <stdio.h>
#include <math.h>

void Lab5_3() {
    int A = 3;
    int B = 52;
    int C = 510;
    // 3à
    if ((A % 2 == 0 || B % 2 == 0) && !(A % 2 == 0 && B % 2 == 0)) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    // 3á
    if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }
}