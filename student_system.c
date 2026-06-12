#include <stdio.h>

struct student {
char name[50];
int roll_no;
float marks;
};

int main() {
    struct student s;
    FILE *fptr;
printf("Enter name, roll_no., and marks: ");
scanf("%s %d %f", s.name, &s.roll_no, &s.marks);

fptr = fopen("data.txt", "a");
if (fptr == NULL) {
    printf("Error opening file!");
    return 1;
}

fprintf(fptr, "Name: %s, Roll: %d, marks: %.2f\n", s.name, s.roll_no, s.marks);
    fclose(fptr);

    printf("data saved successfully!");
return 0;

}
