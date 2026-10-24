#include  "math_utils.h"

static int callCount = 0;   // räknar upp alla räkningar med callCount++

int add(int a, int b) {
    callCount++;
    return a + b;
}
int sub(int a, int b) {
    callCount++;
    return a - b;
}
int mul(int a, int b) {
    callCount++;
    return a * b;
}
int divide(int a, int b) {
    callCount++;
    return a / b;
}
int power(int a, int b) {
    int c = 1;
    for(int i = 1; i <= b; i++) {
        c = c * a;
    }
    callCount++;
    return c;
}
int getCallCount(void) {
    return callCount;
}

