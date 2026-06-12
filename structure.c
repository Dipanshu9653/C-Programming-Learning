#include <stdio.h>

struct car {
    int year;
    float price;
};

int main() {
    struct car  mycar;
    mycar.year = 2000;
    mycar.price = 75000.00;
    
    printf("car year: %d,  price: %.2f", mycar.year, mycar.price);

    return 0;

}

