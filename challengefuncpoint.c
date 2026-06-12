#include <stdio.h>
void changevalue(int *p) {
*p = 100;
}

int main() {
    int x = 20;
    printf("value of x before: %d\n", x);

    changevalue(&x);

    printf("now value of x: %d\n", x);
    return 0;

}