#include <stdio.h>

#define quantidade 3

int main () {
	
 int busca, achou = 0;
 int idade[quantidade], codigo[quantidade], salario[quantidade];
 char opt = 's';
 
 for (int i = 0; i < quantidade; i++) {
	 
	 printf("\n\nCodigo [%i]: ", i+1);
	 scanf("%i", &codigo[i]);
	
	 printf("Idade: ");
	 scanf("%i", &idade[i]);
	 
	 printf("Salario: ");
	 scanf("%i", &salario[i]);
	}

 while (opt == 's' || opt == 'S') {
 
	printf("\nBuscar pelo codigo: ");
	scanf("%i", &busca);
	fflush(stdin);
	
	for (int i = 0; i < quantidade; i++) {
		
		if (codigo[i] == busca) {
			achou = 1;
			printf("\n\nCodigo: %d", codigo[i]);
		    printf("\nIdade: %d ", idade[i]);
		    printf("\nSalario: %d ", salario[i]);
		}
	
		if (achou == 0) {
			printf("Codigo nao cadastrado");
		}
		
	   achou = 0;
	   printf("\nContinuar s/n?");
	   scanf("%c", &opt);
	
		}
	}

 	
	return 0;
}
