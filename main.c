#include <stdio.h>
#include <stdlib.h>
int addition (int a, int b){
    return a+b;
}

int main()
{
    int a, b;
    printf("Choisir deux chiffres :");
    scanf("%d", &a);
    printf( " et ");
    scanf("%d", &b);
    printf("le resultat est le l'addition de %d et %d est %d", a, b, addition( a, b));
    return 0;
}
