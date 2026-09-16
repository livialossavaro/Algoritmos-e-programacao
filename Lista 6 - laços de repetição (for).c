#include <stdio.h>
#include <stdlib.h>

int main () {
	
	//Exercicio 1
	
	int i, num[10];
	
	for (i= 0; i < 10; i++) {
		printf("Numero: ");
		scanf("%i", &num[i]);
	}
	
	for (i = 0; i < 10; i++) {
	
	printf("%i - ", num[i]);
}
	
	//Exercicio 2

	int i, num[10];
	
	for (i= 0; i < 10; i++) {
		printf("Numero: ");
		scanf("%i", &num[i]);
		fflush(stdin);
	}
	
	for (i = 9; i >= 0; i--) {
	printf("%i ", num[i]);
}
	
       //Exercicio 3 

	int i, num[10], posicao;
	
	for (i= 0; i < 10; i++) {
		printf("Numero[%i]: ", i);
		scanf("%i", &num[i]);
		fflush(stdin);
	}
	
	printf("Escolha a posicao do vetor: ");
	scanf("%i", &posicao);
	
	printf("O numero nesta posicao e: %i", num[posicao]);	
	
	
	//Exercicio 4

	int main () {
	
	int num[15], i;
	
	for (i = 0; i < 15; i++) {
		printf("Numero [%i]: ", i);
		scanf("%i", &num[i]);
	}	
	
	for (i = 0; i < 15; i++) {
	
	printf("%i X 2 = %i\n", num[i], num[i] * 2);
}
	
	//Exercicio 5

int i, num[12];
 
  for (i = 0; i < 12; i++) {
  	printf("Num [%i]: ", i);
  	scanf("%i", &num[i]); 
  }

  for (i = 0; i < 12; i++) {
  
   if (num[i] > 0) {
   	printf("Numeros positivos: %i\n", num[i]);
   }
}

   //Exercicio 6

 int i, num[12], count = 0;
 
  for (i = 0; i < 12; i++) {
  	printf("Num [%i]: ", i);
  	scanf("%i", &num[i]); 
  }

  for (i = 0; i < 12; i++) {
  
   if (num[i] < 0) {
   	count++;
   }
}

  printf("Quantidade de numeros negativos: %i\n", count);
	
	//Exercicio 7

int i, num[50], numero= 2;
 
  for (i = 0; i < 50; i++) {
    num[i] = numero;
    numero += 2;
  }
  
  for (i = 0; i < 50; i++) {
  	printf("%i\n", num[i]);
  }

         //Exercicio 8

int i, num[10];
 float soma;
 
 for (i = 0; i < 10; i++) {
 	
 do {
 	printf("[%i] Numero: ", i);
 	scanf("%i", &num[i]);

  	if (num[i] < 0) {
  		printf("Digite novamente!\n\n");
  	}
  }
	while (num[i] < 0);
}

 for (i = 0; i < 10; i++) {
 	if (i % 2 != 0){
    soma += num[i];
}
}
printf("%.2f", soma);


	
	//Exercicio 9

int i, num[10], numero, count = 0;

 for (i = 0; i < 10; i++) {
 	printf("[%i] Numero: ", i);
 	scanf("%i", &num[i]);
 }
	
	do {
	printf("\n\nDigite um numero para verificar na matriz: ");
	scanf("%i", &numero);
	
 for (i = 0; i < 10; i++) {
 	if (num[i] == numero) {
 		count++;
	 }
 }	
 
 if (count > 0) {
 	printf("O numero aparece %i vezes no vetor", count);
 }
 else {
 	printf("Numero invalido, tente novamente!");
 }
}
	while (count == 0);

    //Exercicio 10

	int i, num[10], vetor[10];
 
 for (i = 0; i < 10; i++) {
 	printf("[%i] Numero: ", i);
 	scanf("%i", &num[i]);
 }

printf("\n");
 
  for (i = 0; i < 10; i++) {
  	vetor[i] = num[9 - i];
 	printf("%i ", num[i]);
}
 
 printf("\n");
  
 for (i = 9; i >= 0; i--) {
 	printf("%i ", vetor[i]);
 }
 
 printf("\n");
 
for (i = 0; i < 10; i++) {
    if (num[i] == vetor[i]) {
      printf("\nPosicoes: %i", i);
     
        }
    }
 
	return 0;
}
