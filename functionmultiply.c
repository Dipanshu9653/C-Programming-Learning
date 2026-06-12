#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(8 , 9);
    printf("multiply is: %d", result);
    return 0;

}