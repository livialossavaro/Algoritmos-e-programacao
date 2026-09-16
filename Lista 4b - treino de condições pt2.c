#include <stdio.h>
#include <stdlib.h>

int main () {
	
	//Exercicio 1 
	
	float n1,n2,n3,p1,p2,p3,media;
	
	printf("Digite as tres notas das provas: ");
	scanf("%f,%f,%f", &n1,&n2,&n3);
	
	printf("\n\nAtribua um peso para a nota 1 em numero decimal: ");
	scanf("%f",&p1);
	fflush(stdin);
	
	printf("\nAtribua um peso para a nota 2 em numero decimal: ");
	scanf("%f",&p2);
	fflush(stdin);
	
	printf("\nAtribua um peso para a nota 3 em numero decimal: ");
	scanf("%f",&p3);
	fflush(stdin);
	
    media = (n1*p1) + (n2*p2) + (n3*p3) / (p1 + p2 + p3);
    printf("\n%.2f", media);
	
	if ( media >= 7) {
		printf("\n\nAprovado!\n\n");
	}
	
	else if ( media >5 && media < 7) {
		printf("\n\nRecuperacao!\n\n");
	}
	
    else if ( media < 5) {
    	printf("\n\nReprovado!\n\n");
	}
	
	//Exercicio 2
	
	int idade;
	
	printf("Qual a sua idade? ");
	scanf("%i", &idade);
	
	if ( idade >= 0 && idade <= 12) {
		printf("Crianca\n\n");
	}
	
	else if ( idade >= 13 && idade <= 17) {
		printf("Adolescente\n\n");
	}
	
    else if ( idade >= 18 && idade <= 59) {
		printf("Adulto\n\n");
	}
	
    else if ( idade >= 60 && idade <= 120) {
		printf("Idoso\n\n");
	}
	
	else {
		printf("Idade invalida!\n\n");
	}
	
	//Exercicio 3
	
	float valor, valor2, valor3, valor4;
	
	printf("Fale o valor: ");
	scanf("%f", &valor);
	
	if ( valor <= 100) {
		
	valor2 = valor * 0.95;
	printf("O valor com desconto e %.2f", valor2);
	}
	
	else if ( valor > 100 && valor <= 500) {
		
	valor3 = valor * 0.90;
	printf("O valor com desconto e %.2f", valor3);
	}
	
	else if ( valor > 500) {
	
	valor4 = valor * 0.85;
	printf("O valor com desconto e %.2f", valor4);
	}
	
	//Exercicio 4
	
	int num;
	
	printf("\n\nDigite um numero inteiro: ");
	scanf("%i", &num);
	
	if ( num % 3 == 0) {
		printf("\nO numero e multiplo de 3");
	}
	
	else if ( num % 5 == 0) {
		printf("\nO numero e multiplo de 5");
	}
	
	else if ( num % 3 == 0 && num % 5 == 0) {
		printf("\nO numero e multiplo de 3 e 5");
	}
	
	//Exercicio 5
	
	int numero;
	
	printf("\n\nDigite um numero de 1 a 7: ");
	scanf("%i", &numero);
	
	switch (numero) {
		
	case 1: 
	   printf("O dia da semana corresponde e domingo");
	   break;
	   
	   case 2: 
	   printf("O dia da semana corresponde e segunda");
	   break;
	   
	   case 3: 
	   printf("O dia da semana corresponde e terca");
	   break;
	   
	   case 4: 
	   printf("O dia da semana corresponde e quarta");
	   break;
	   
	   case 5: 
	   printf("O dia da semana corresponde e quinta");
	   break;
	   
	   case 6: 
	   printf("O dia da semana corresponde e sexta");
	   break;
	   
	   case 7: 
	   printf("O dia da semana corresponde e sabado");
	   break;
	}
	
	//Exercicio 6
	
	int macas;
	
	printf("\n\nDigite a quantidade de macas compradas: ");
	scanf("%i", &macas);
	
	if ( macas < 12) {
		
		valor = macas * 1.3;
		
		printf("O valor e %.2f", valor);
	}
	
	else if ( macas >= 12) {
		
		valor = macas * 1;
		
		printf("O valor e %.2f", valor);
	}
	
	return 0;
}
