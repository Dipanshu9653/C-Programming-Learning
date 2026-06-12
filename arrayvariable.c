#include <stdio.h>
int main() {

    
   int marks[8] = {10, 20, 30, 40, 50, 60, 70, 80};
   int sum = 0; 

   for(int i =0; i < 8; i++) {
    sum = sum + marks[i];
   }
    printf("total sum is: %d", sum);

    return 0;

}
