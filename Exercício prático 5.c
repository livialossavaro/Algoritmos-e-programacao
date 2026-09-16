#include <stdio.h>
#define quantidade 10

int main () {
	
	int i, opt, codigo[quantidade], idade[quantidade], salario[quantidade], busca;
	
	do {	
		printf("\nMenu:\n\n[1]-Cadastrar\n[2]-Listar todas as pessoas\n[3]-Buscar pessoa pelo codigo\n[4]-Sair\n\nOpcao escolhida: ");
		scanf("%i", &opt);
		
	if (opt == 1) {
		
	for (i = 0; i < quantidade; i++) {
		
		printf("\nCodigo: ");
		scanf("%i", &codigo[i]);
		
		printf("Idade: ");
		scanf("%i", &idade[i]);
		
		printf("salario: ");
		scanf("%i", &salario[i]);	
	} 
   }
	                        
	else if (opt == 2) {

		for(i = 0; i < quantidade ; i++) {
			printf("\nCodigo: %i", codigo[i]);
			printf("\nidade: %i", idade[i]);
			printf("\nsalario: %i\n", salario[i]);
	}
	}
	
	else if (opt == 3) {
		
		printf("\nDigite o codigo para buscar nos cadrastos: ");
		scanf("%i", &busca);
		
		if (busca != codigo[i]) {
			printf("\nCodigo nao registrado!\n");
		}
		
		for (i = 0; i < quantidade; i++) {
			
			if (busca == codigo[i]) {
			printf("\nCodigo: %i", codigo[i]);
			printf("\nidade: %i", idade[i]);
			printf("\nsalario: %i\n", salario[i]);
			}	
		  }
	    }
	  }
	  
   while (opt != 4);
	
	return 0;
}
