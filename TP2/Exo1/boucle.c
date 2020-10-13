#include <stdio.h> 
#include <math.h>
#include <stdlib.h>

//Exo 1
int main() {

    int i = 0;
    unsigned short int somme = 0;
    unsigned short int n = 0;
    printf("Veuillez inserer la valeur de n :");
    scanf_s("%hu", &n);
    for (i = 1; i <= n; i++)
    {
        somme = (i + somme);
    }
    printf("Voici la somme des n premiers entier relatif avec la premiere methode : %d \n", somme);
    i = 0;
    somme = 0;
    while (i <= n)
    {
        somme = (i + somme);
        i++;
    }
    printf("Voici la somme des n premier entier relatif avec la deuxieme methode : %d \n", somme);

    i = 0;
    somme = 0;
    do
    {
        somme = (i + somme);
        i++;
    } while (i <= n);
    printf("Voici la somme des n premier entier relatif avec la troisieme methode : %d \n", somme);

    i = 0;

    do
    {
        printf("Veuillez inserer la valeur de n :");
        scanf_s("%d", &n);

    } while (n >= 361);
    printf("Voici la somme");
}
