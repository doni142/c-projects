#include <stdio.h>

int main() {
    int num;

    //Bemenet bekérése a felhasználótól
    printf("enter a number: ");
    scanf("%d", &num);

    // Döntés, hogy a szám negatív vagy pozitív

    if (num >= 0) {

        printf("The number is positive.\n");

    } else {

        printf("The number is negative.\n");

    }
    

    return 0;

}