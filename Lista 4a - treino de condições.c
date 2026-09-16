#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	//Exercicio 1 
	float num;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	if (num > 0) {
		printf("O numero digitado e positivo!\n\n\n");
	}
	
	else if (num < 0) {
		printf("O numero digitado e negativo!n\n\n");
	}
	
	else if (num ==  0) {
		printf("O numero digitado e nulo\n\n\n");
	}
	
	//Exercicio 2 
	
	int int1, int2, numero;
	
	printf("Digite o primeiro numero do intervalo numerico: ");
	scanf("%i", &int1);
	
	printf("Digite o segundo numero do intervalo numerico: ");
	scanf("%i", &int2);
	
	printf("Digite um numero para saber se se encontra nesse intervalo numerico: ");
	scanf("%i", &numero);
	
	if (int1 > numero > int2) {
		printf("%i esta nesse intervalo!\n\n\n", numero);
	}
	else {
		printf("%i nao esta nesse intervalo!\n\n\n", numero);
	}
	
	//Exercicio 3
	
    float peso , altura , imc;
    
    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);
    
    printf("Digite sua altura em m:");
	scanf("%f", &altura);

	imc = peso / (altura * altura);
	
	printf("Seu imc e %.2f\n", imc);
	
	if ( imc < 18.5) {
		
		printf("Abaixo do peso!\n\n");

	}
	
    else if ( imc >= 18.5 && imc < 25) {
		
		printf("Saudavel!\n\n");
	}
	
	else if ( imc >= 25 && imc < 30) {
		
		printf("Sobrepeso!\n\n");
	}
	 
	else if ( imc >= 30 && imc < 35) {
		
		printf("Obesidade grau 1!\n\n");
	}
 
    else if ( imc >= 30 && imc < 40) {
    	
    	printf("Obesidade grau 2\n\n");
	}
 
    else if ( imc >= 40) {
    	
    	printf("Obesidade grau 3!\n\n");
	}
	
	//Exercicio 4
	
	int a, b, c;
	
	printf("Digite tres numeros: ");
	scanf("%i, %i, %i", &a, &b, &c);

    if (a == b && b == c) {
    	printf("O numero %i se repete 3 vezes\n\n", a);
	}
	
	else if ( a == b) {
    	printf("O numero repetido e %i\n\n", b);
	}
	
    else if (b == c) {
    	printf("O numero repetido e %i\n\n", c);
	}
	
    else if (a == c) {
    	printf("O numero repetido e %i\n\n", c);
	}
	
	else {
		printf("Todos os numeros sao diferente\n\n");
	}
	
	//Exercicio 5
	
	
	printf("Digite tres numeros: ");
	scanf("%i, %i, %i", &a, &b, &c);
	
	if (a > b && a > c) {
		
		printf("O maior numero e %i\n\n", a);
	}
	
	else if ( b > a && b > c) {
		
		printf("O maior numero e %i\n\n", b);
	}
	
	else if ( c > a && c > b) {
		
		printf("O maior numero e %i\n\n", c);
	}

    //Exercicio 6 
    
    int num1, num2;
    int opt;
    
    printf("Digite um numero: ");
    scanf("%i", &num1);
    
    printf("Digite outro numero: ");
    scanf("%i", &num2);
	    
	printf("\nMenu:\n[1]- adicao\n[2]- subtracao\n[3]- multiplicacao\n[4]- divisao\n\nDigite a operacao desejada: ");
	scanf("%i", &opt);
    
    switch (opt) {
    	
    case 1 : 
    printf("%i", num1 + num2);
    break;
    
    case 2 : 
    printf("%i", num1 - num2);
    break;

    case 3 : 
    printf("%i", num1 * num2);
    break;
    
    case 4 : 
    printf("%i", num1 / num2);
    break;
	}
   
	//Exercicio 7
	
	int lado1, lado2, lado3;
	
	printf("\n\nDigite a medida do primeiro lado: ");
	scanf("%i", &lado1);
	
	printf("Digite a medida do segundo lado: ");
	scanf("%i", &lado2);
	fflush(stdin);
	
	printf("Digite a medida do terceiro lado: ");
	scanf("%i", &lado3);
	fflush(stdin);
	
	if ( lado1 == lado2 && lado2 == lado3)  {
		printf("Triangulo equilatero");
	}
	
	else if ( lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
		printf("Triangulo isosceles");
	}
	
	else if ( lado1 != lado2 && lado2 != lado3) {
		
		printf("Triangulo escaleno");
    }
	

	return 0;
	
}
