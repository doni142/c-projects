#include <stdio.h>

int main() {
    float m, r, pi, V, A;
    printf("Adja meg a henger magasságát és térfogatát: ");
    scanf("%f %f", &m, &r);
    pi = 3.14;
    
    // térfogat
    V = (r*r)*pi*m;
    // felület
    A = (2*r*r*pi) + (2*r*pi*m);
    
    //Eredmény kiirása
    printf("A henger térfogata : %.2f\n", V);
    printf(" A henger felülete: %.2f\n", A);
    
    /*float a, b, quotient;
    // Két szám bekérése
    printf("Adj meg két valós számot: ");
    scanf("%f %f", &a, &b);
    
    quotient = a / b;
    //Eredmény kiirása
    printf("Az osztás eredménye: %.2f\n", quotient);*/
    
    return 0;
}

