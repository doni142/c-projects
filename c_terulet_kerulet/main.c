#include <stdio.h>

// függvények declarálása (int-el dolgozik)
int kerulet(int, int);
int terulet(int, int);

int main(){
    
int a, b, ter, ker;

printf("Kérem a téglalap egyik oldalának hosszát: "); scanf("%d", &a);
printf("Kérem a téglalap egyik oldalának hosszát: "); scanf("%d", &b);

ker = kerulet(a, b);
ter = terulet(a, b);

printf("A téglalap kerülete=%d, a területe= %d\n", ker, ter);
}

int kerulet(int x, int y){
int z;
z = 2*(x+y);
return z;

}

int terulet(int x, int y){
return x*y;
}