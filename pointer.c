#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    printf("value of x: %d\n", x);
    printf("address of x: %p\n", &x);
    printf("address stored in pointer p: %p\n", p);
    printf("value accessed using pointer p: %d\n", *p);

    return 0;

}
