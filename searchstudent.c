#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int roll_no;
    float marks;
};

void addstudent();
void displaystudent();
void searchstudent();

int main() {
    int choice;
    while(1) {
        printf("\n--- student management system ----\n");
        printf("1. Add student\n");
        printf("2. Display all student\n");
        printf("3. Search student\n");
        printf("4. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: addstudent(); break;
            case 2: displaystudent(); break;
            case 3: searchstudent(); break;
            case 4: exit(0);
            default:
            printf("invalid choice, try again!\n");
        }
    } 
    return 0;

}

void addstudent() {
    struct student s;
    for(int i =0; i <50; i++)
    s.name[i] = '\0';

    FILE *fptr = fopen("data.txt", "a");

    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll_no: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    fprintf(fptr, "%s %d %.2f\n", s.name, s.roll_no, s.marks);
    fclose(fptr);
    printf("Data saved successfully!\n");

}

void displaystudent() {
    struct student s;
    FILE *fptr = fopen("data.txt", "r");

    if(fptr == NULL) {
        printf("No file found! Please add student first.\n");
        return;
    }

    printf("\n--- Student List ---\n");
    while(fscanf(fptr, "%s %d %f", s.name, &s.roll_no, &s.marks) != EOF) {
        printf("Name: %s, Roll_no: %d, Marks: %.2f\n", s.name, s.roll_no, s.marks);
    }
    fclose(fptr);
}

void searchstudent() {
int search_roll, found = 0;
struct student s;
FILE *fptr = fopen("data.txt", "r");

if(fptr == NULL) {
    printf("No records available to search.\n");
    return;
}

printf("Enter Roll_no to search: ");
fflush(stdout);
scanf("%d", &search_roll);

rewind(fptr);

char name[50];
int r;
float m;

while(fscanf(fptr, "%s %d %f", s.name, &s.roll_no, &s.marks) != EOF) {
    if(s.roll_no == search_roll) {
    printf("\n--- Student Found ---\n");
    found = 1;
    break;
}

}

if(!found) {
    printf("Student with roll_no %d not found.\n", search_roll);
}
fclose(fptr);
}
