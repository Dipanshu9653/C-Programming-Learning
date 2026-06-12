#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x, y;
    printf("enter two nummbers");
    scanf("%d %d", &x, &y);

    int result = multiply(x, y);
    printf("result is: %d", result);
    return 0;

}
