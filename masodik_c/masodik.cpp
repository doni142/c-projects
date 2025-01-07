#include <stdio.h>

// c kód lefut c++ba

int main() {
    char ch;

    //üzenet a felhasználónak
    printf("Enter characters (press enter to finish):\n");

    //gyűjtjűk a karaktereket és kiírjuk őket, amíg az enter lenyomásra nem kerül
    while ((ch = getchar()) != '\n')
    {
        printf("%c", ch);
    }

    printf("\n");
    return 0;
}