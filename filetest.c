#include <stdio.h>
int main() {
    FILE *fptr;

    fptr = fopen("data.txt", "w");

    fprintf(fptr,"roll: 879654, marks: 87.00");

    fclose(fptr);

    printf("Data saved in file!");

    return 0;

}