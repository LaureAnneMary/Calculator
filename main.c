#include <stdio.h>
#include <stdlib.h>
int addition (int a, int b){
    return a+b;
}
int soustraction( int a, int b){
    return a-b;
}

int main()
{
    int a, b;
    printf("Choisir deux nombre entre 0 et 10000000000000 ( a toi de voir ;)) :");
    scanf("%d", &a);
    printf( " et ");
    scanf("%d", &b);
    printf("\n le resultat de l'addition de %d et %d est %d", a, b, addition( a, b));
    printf("\n le resultat de la soustraction est %d ", soustraction(a, b));
    return 0;
}
