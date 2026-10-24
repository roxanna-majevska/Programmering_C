#include  "math_utils.h"

int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int div(int a, int b) {
    return a / b;
}
int power(int a, int b) {
    int c = 1;
    for(int i = 1; i <= b; i++) {
        c = c * a;
    }
    return c;
}