#include <stdio.h> 
#include <math.h>
#include <stdlib.h>

int main() {

	int annee = 0;
	printf("Entrer un entier naturel inferieur a 10000 : \n");
	scanf_s("%d", &annee);

	//méthode 1 ( if / else )

	if (annee % 4 == 0) {
		if (annee % 100 == 0 && annee % 400 != 0) {
			printf("L'annee n'est pas bissextile \n");
		}
		else
		{
			printf("l'annee est bissextile \n");
		}
	}
	else
	{
		printf("L'annee n'est pas bissextile \n");
	}

	//methode 2

	if (annee % 4 == 0 && annee % 100 != 0 || annee % 400 == 0) {
		printf(" l'annee est  bissextile \n");
	}
	else
	{
		printf("l'annee n'est pas bissextile\n");
	}
}