#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Plage;
struct Montagne;

int choix;

int main(){
	
	printf("Bonjour, vous voulez aller a la plage ou a la montagne ?\n");
	printf("1 pour aller a la plage, 2 pour aller a la montagne ?\n");

	scanf("%d" ,&choix);
		if (choix==1)
		{
			printf("Vous etes a la plage\n");
		}
		
		if(choix==2)
		{
			printf("Vous etes a la montagne\n");
		}





}