#include <stdio.h>
#include <stdlib.h>

    //Exercicio 1

int main () {
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	if (numero > 0) {
		printf("O numero digitado e positivo!\n\n\n");
	}
	else {
		printf("O numero digitado e negativo!\n\n\n");
	}
	
	//Exercicio 2
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	if (num >= 0 && num <= 9) {
		printf("O seu numero esta na faixa!\n\n\n");
	}
	else {
		printf("O seu numero nao esta na faixa!\n\n\n");
	}
	
	//Exercicio 3
	
	int numerador, denominador, divisao;
	
	printf("Digite o numerador: ");
	scanf("%i", &numerador);
	
	printf("Digite o denominador: ");
	scanf("%i", &denominador);
	
	if (denominador == 0) {
		printf("Nao existe divisao por zero!\n\n\n");
	}
	else  {
		
		divisao = numerador / denominador;
		printf("O resultado da divisao e %i\n\n\n", divisao);
	}
	
	//Exercicio 4
	
	int nota1, nota2, media;
	
	printf("Digite a primeira nota: ");
	scanf("%i", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%i", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if (media > 5) {
		printf("Aprovado!\n\n\n");
	}
	else {
		printf("Nao aprovado!\n\n\n");
	}
	
	//Exercicio 5
	
	int num1, num2;
	
	printf("Digite um numero: ");
	scanf("%i", &num1);
	
	printf("Digite outro numero: ");
	scanf("%i", &num2);
	
	if (num1 > num2) {
		printf("O maior numero e %i\n\n\n", num1);
	}
	 else  {
	 	 printf("O maior numero e %i\n\n\n", num2);
	 }	
	
	//Exercicio 6
	
	int numero1, numero2;
	
	printf("Digite um numero: ");
	scanf("%i", &numero1);
	
	printf("Digite outro numero: ");
	scanf("%i", &numero2);
	
	if (numero1 > numero2) {
		printf("%i , %i\n\n\n", numero2, numero1);
	}
	else {
		printf("%i ,  %i\n\n\n", numero1, numero2);
	}
	
	//Exercicio 7
	
	float salario, aumento1, aumento2;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	if ( salario <= 1000) {
	
	aumento1 = salario * 1.05;
	
	printf("O novo salario e %.2f\n\n\n", aumento1);
}
	
	else {
		
    aumento2 = salario * 1.07;
    
    printf("O novo salario e %.2f\n\n\n", aumento2);
	}
	
	//Exercicio 8
	
	float minutos, tempo, valor;
	
	printf("Digite os minutos utilizados: ");
	scanf("%f", &minutos);
	
	if (minutos < 50 || minutos == 50) {
		printf("Valor do plano = 50\n\n\n");
	}
	else {
		
		tempo = minutos - 50;
		valor =  minutos + tempo * 1.50;
		
		printf("Valor do plano= %.2f\n\n\n", valor);
	}
	
	//Exercicio 9
	
	int ano;
	
	printf("Digite um ano: ");
	scanf("%i", &ano);
	
	if (ano % 4 == 0 && ano % 100 != 0) {
		printf("Ano bissexto");
	}
	else {
		printf("Ano nao-bissexto");
	}
	
	return 0;
}
