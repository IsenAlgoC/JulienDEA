#include <stdio.h> 
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

//Exo 2
int main() {

	bool t = true;

	while (t == true) {

		float largeur = 0;
		float longueur = 0;
		float hauteur = 0;

		while (longueur < 1 || longueur > 150) {
			printf("saisir la longueur de la valise : ");
			scanf_s("%f", &longueur);
			printf("\n");
		}

		while (largeur < 1 || largeur > 150) {
			printf("saisir la largeur de la valise : ");
			scanf_s("%f", &largeur);
			printf("\n");
		}

		while (hauteur < 1 || hauteur > 150) {
			printf("saisir la hauteur de la valise : ");
			scanf_s("%f", &hauteur);
			printf("\n");
		}

		if (longueur < 1 || longueur > 55) {
			printf("lLongueur NON VALIDE \n");
		}
		else {
			if (largeur < 1 || largeur > 35) {
				printf("Largeur NON VALIDE \n");
			}
			else {
				if (hauteur < 1 || hauteur > 25) {
					printf("Hauteur NON VALIDE \n");
				}
				else {
					printf("Valise VALIDE \n");
				}
			}
		}

		printf("Souhaitez-vous traiter une deuxieme valise ? 1 pour Oui 0 pour non ");
		scanf_s("%d", &t);
	}
}