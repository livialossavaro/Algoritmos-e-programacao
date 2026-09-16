#include <stdio.h>

int main () {
	
	//Exercicio 1
	
	/*int num;
			
	while (num < 100){
		printf("%i ", num);
		num += 2;	
	}*/
	
	//Exercicio 2
	
	/*int num  = 1;
	
	do {
		printf("%i ", num);
		num += 2;
	}
	while (num < 100);*/
	
	//Exercicio 3
	
	/*float media, n1, n2;
	
	do {
	 printf("Nota 1: ");
	 scanf("%f", &n1);
	}
	
	while (n1 < 0 || n1 > 10);
	
	do {
	 printf("Nota 2: ");
	 scanf("%f", &n2);
	}
	
	while (n2 < 0 || n2 > 10);
	
	media = (n1 + n2) / 2;
	printf("Media = %.2f", media);*/
	
	//Exercicio 4
	
	/*int num, opt = 1, maior, count = 0, soma;
	float media;
	
	while (opt == 1) {

		printf("\nNumero: ");
		scanf(" %i", &num);
		
	if (num > maior) {
		maior = num;
		fflush(stdin);
	}
	
	soma += num;
	count++;
	
	printf("\n[1]-Continuar\n[2]-Parar\n\nOpcao escolhida: ");
	scanf(" %i", &opt);
   }
   
   printf("\nMaior numero: %i", maior);
    media = soma / count;
	printf("\nMedia: %f", media);*/
	
	//Exercicio 5
	
	/*int opt, n1, n2;
	
  while (opt != 5) {
  	
  	printf("\n\nMenu:\n\n[1]-Soma\n[2]-Subtracao\n[3]-Multiplicacao\n[4]-Divisao\n[5]-Sair\n\nOpcao escolhida: ");
  	scanf("%i", &opt);
  	
  	if (opt != 5){
  		
  	printf("\nNumero 1: ");
  	scanf("%i", &n1);
  	
  	printf("Numero 2: ");
  	scanf("%i", &n2);
  	}
  	
  	switch(opt) {
  		
  		case 1: 
	  	
  		printf("\nSoma: %i ", n1+n2);
  		break;
  		
  		case 2: 
  		
  		printf("\nSubtracao: %i ", n1-n2);
  		break;
  		
  		case 3: 
  		
  		printf("\nMultiplicacao: %i ", n1*n2);
  		break;
  		
  		case 4: 
  		
  		printf("\nDivisao: %i ", n1/n2);
  		break;
  		
	  }
  } */
  
  //Exercicio 6
  
  /*int saldo, opt, deposito, retirada;
  
  printf("Saldo bancario: ");
  	scanf("%i", &saldo);
  
  do {

  	printf("\nMenu:\n[1]-Deposito\n[2]-Retirada\n[3]-Fim e valor\n\nOpcao escolhida: ");
  	scanf("%i", &opt);
  	fflush(stdin);
  	
  	switch (opt) {
  		
  		case 1:
  			printf("Valor deposito: ");
  			scanf("%i", &deposito);
  			saldo += deposito;
  			break;
  			
  		case 2:
  			printf("Valor retirada: ");
  			scanf("%i", &retirada);
  			saldo -= retirada;
  			break;
	  }
  	
  }
  	
  	while (opt != 3);
  	
  	printf("Saldo: %i", saldo);
  	
    if (saldo > 0) {
    	printf("\nConta preferencial!");
	}
	
	else if (saldo < 0) {
    	printf("\nConta estourada!");
	}
	
	else {
		printf("\nConta zerada!");
	}*/
	
	//Exercicio 7
	
	/*int divisor, iintervalo, fintervalo;
	float num;
	
	printf("Valor do divisor: ");
	scanf("%i", &divisor);
	
	printf("Inicio do intervalo: ");
	scanf("%i", &iintervalo);
	
	printf("Final do intervalo: ");
	scanf("%i", &fintervalo);
	
	while (iintervalo < fintervalo) {
	
		if ( iintervalo % divisor == 0) {
		printf("Numeros divisiveis no intervalo: %i ", iintervalo);
		}
		
		iintervalo++;
	}*/
	
	//Exercicio 8
	
	int voto, votosjose = 0, votosmaria = 0, votosjoao = 0;
	float porcentagem, count = 0;
	                                    
	do {
	
	printf("\nUrna eletronica:\n\n[1]-Jose\n[2]-Maria\n[3]-Joao\n[4]-Branco\n[5]-Nulo\n[0]-Encerrar votacao\n\nOpcao de voto: ");
	scanf("%i", &voto);
	fflush(stdin);
	
	switch (voto) {
		case 1:
		votosjose++;
		break;
		
		case 2: 
		votosmaria++;
		break;
		
		case 3:
	    votosjoao++;
		break;
	}
	
	if(voto != 0) {
	count++;
    }
    
	}
	
	while (voto != 0);
	
	printf("\n------Exercicio A------\n\n");

	printf("\nVotos jose: %i", votosjose);
	printf("\nVotos maria: %i", votosmaria);
	printf("\nVotos joao: %i", votosjoao);
	
	printf("\n\n\n------Exercicio B e C------\n\n");
	
	if (votosjose > votosmaria && votosjose > votosjoao) {
		printf("Jose vencedor!");
		porcentagem = (votosjose/count) * 100;
		printf("\nPorcentagem: %.2f", porcentagem);
		
	}
	
	else if (votosmaria > votosjose && votosmaria > votosjoao) {
		printf("Maria vencedora!");
		porcentagem = (votosmaria/count) * 100;
		printf("\nPorcentagem: %.2f", porcentagem);
	}
	
	else if (votosjoao > votosmaria && votosjoao > votosjose) {
		printf("Joao vencedor!");
		porcentagem = (votosjoao/count) * 100;
		printf("\nPorcentagem: %.2f", porcentagem);
	}

	else {
	printf("\nHouve empate entre os candidatos.\n");
	}
	
 return 0;	                      
}
