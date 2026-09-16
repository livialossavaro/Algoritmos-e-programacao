#include <stdio.h>
#include <stdlib.h>

int main () {

//Exercicio 1 

int opt, qnt, valor, ind;
float desconto;

printf("Menu:\n\n[1]Hamburguer\n[2]Pizza\n[3]Refrigerante:\n\nOpcao desejada: ");
scanf("%i", &opt);

switch (opt) {
	
	case 1: 
	ind = 10;
	printf("Valor individual = 10");
	break;
	
	case 2: 
	
	ind = 15;
	printf("Valor individual = 15");
	break;
	
	case 3: 
	
    ind = 5;
    printf("Valor individual = 5");
	break;
}

printf("\n\nQual a quantidade desejada? ");
scanf("%i", &qnt);

if ( qnt > 0) {
	printf("Valor = %i", valor = ind * qnt );
}

else {
	printf("Valor invalido!");
		}
		
if (valor > 30) {
	
	desconto = valor * 0.9;
	printf("\n\nVoce recebeu um desconto, logo ira pagar %.2f", desconto);
 }
}
