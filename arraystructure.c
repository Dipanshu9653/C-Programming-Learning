#include <stdio.h>

struct student {
    int roll;
    float marks;
};

int main () {
    struct student class[3];
    for(int i = 0; i < 3; i++) {
        printf("enter roll and marks for student %d: ", i+1);
        scanf(" %d %f", &class[i].roll, &class[i].marks);
        fflush(stdin);
    }

    printf("\n--- student records ---\n");
    for(int i = 0; i < 3; i++) {
        printf("student %d: roll %d, marks %.2f\n", i+1, class[i].roll, class[i].marks);
    }

    return 0;

}