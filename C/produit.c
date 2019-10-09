#include <stdio.h>

int multiplication (void) {
	int nombre, produit, compteur;
	produit=1;
	compteur=0;

	while (compteur < 999) {

		printf("entre un entiers:");
		scanf("%i", &nombre);
		produit *= nombre;
		compteur++;
		printf("%i\n",produit);

	}

	return produit;
}
