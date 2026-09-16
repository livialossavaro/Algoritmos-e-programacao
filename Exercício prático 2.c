#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	if ( idade < 0) {
	   printf("Idade invalida!");
	}
	 
	else if ( idade > 0 && idade <= 17) {
	   printf("\nIdade = %i \nPlano = 100", idade);
	}
	
	else if ( idade > 18 && idade <= 40) {
	   printf("\nIdade = %i Plano = 150", idade);
	}
	
	else if ( idade > 41 && idade <= 59) {
	   printf("\nIdade = %i Plano = 250", idade);
    }
	   
    else if ( idade >= 60 && idade <= 65) {
    	
       printf("\nIdade = %i Plano = 300", idade);
	}
	
	
	
	else if ( idade > 66 ) {
	   printf("\n\nPlano = 400");
	}
	
