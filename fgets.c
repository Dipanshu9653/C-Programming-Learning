#include <stdio.h>

int main() {
    FILE *fptr;
    char content[100];
    fptr = fopen("data.txt", "r");
    if(fptr == NULL) {
        printf("file not found");
    }else {
        while(fgets(content, 100, fptr) != NULL) {
            printf("%s", content);
        }
    }
    
    fclose(fptr);
    return 0;

}