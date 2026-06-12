#include <stdio.h> 

    struct student {
    char name[50];
    int roll_no;
    float marks;
    };

    void displaystudent() {
    struct student s;
    FILE *fptr = fopen("data.txt", "r");

    if (fptr == NULL) {
    printf("file not found\n");
    return;
}

    while(fscanf(fptr, "%s %d %f", s.name, &s.roll_no, &s.marks) != EOF) {
        printf("Name: %s, roll_no: %d, marks: %.2f\n", s.name, s.roll_no, s.marks);
    }
    fclose(fptr);
    }
    int main() {
    displaystudent();
    return 0;

    }
