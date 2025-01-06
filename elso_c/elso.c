 #include <stdio.h>
/* standard input output => <stdio.h> standard parancsok gyűjteménye! */

int main()
{
    int a, b, sum, kivonas, szorzas, osztas;

    // Két szám bekérése

    printf("Adj meg két egész számot: ");

    scanf("%d %d", &a, &b);

    // Összeadás 
    sum = a + b;

    // Kivonás
    kivonas = a - b;
    
    // Szorzás
    szorzas = a * b;
    
    // Osztás
    osztas = a / b;
    
    // Eredmény kiírása

    printf("Az összeadás eredménye: %d\n", sum);
    
    printf("A kivonas eredménye: %d\n", kivonas);
    
    printf("A szorzas eredménye: %d\n", szorzas);
    
    printf("A Osztás eredménye: %d\n", osztas);

    return 0; 
    
}