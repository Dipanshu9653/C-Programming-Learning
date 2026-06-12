#include <stdio.h>
void changevalue(int *p) {
    *p = 90;
}

int main() {
    int x;
    printf("enter number");
    scanf("%d", &x);
    printf("before value of x: %d\n", x);

    changevalue(&x);

    printf("now value of x: %d\n", x);
    
    return 0;

}
