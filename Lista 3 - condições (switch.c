#include <stdio.h>

int main () {

//Exercicio 1
	
	int mes;
	
	printf("Digite um mes do ano em formato numerico: ");
	scanf("%i", &mes);
	
	switch (mes) {
		
		case 1 : 
		printf("O mes digitado foi %i, que corresponde a janeiro!\n\n\n", mes);
		break;
		
	    case 2 : 
		printf("O mes digitado foi %i, que corresponde a fevereiro!\n\n\n", mes);
		break;
		
		case 3 : 
		printf("O mes digitado foi %i, que corresponde a marco!\n\n\n", mes);
		break;
		
		case 4 : 
		printf("O mes digitado foi %i, que corresponde a abril!\n\n\n", mes);
		break;
		
		case 5 : 
		printf("O mes digitado foi %i, que corresponde a maio!\n\n\n", mes);
		break;
		
		case 6 : 
		printf("O mes digitado foi %i, que corresponde a junho!\n\n\n", mes);
		break;
		
		case 7 : 
		printf("O mes digitado foi %i, que corresponde a julho!\n\n\n", mes);
		break;
		
		case 8 : 
		printf("O mes digitado foi %i, que corresponde a agosto!\n\n\n", mes);
		break;
		
		case 9 : 
		printf("O mes digitado foi %i, que corresponde a setembro!\n\n\n", mes);
		break;
		
		case 10 : 
		printf("O mes digitado foi %i, que corresponde a outubro!\n\n\n", mes);
		break;
		
		case 11 : 
		printf("O mes digitado foi %i, que corresponde a novembro!\n\n\n", mes);
		break;
		
		case 12 : 
		printf("O mes digitado foi %i, que corresponde a dezembro!\n\n\n", mes);
		break;
	}
	
	//Exercicio 2 e 3
	
	char letra;
	
	printf("Digite uma letra do alfabeto: ");
	scanf("%c", &letra);
	
	letra = tolower (letra);
	
	switch (letra) {
		
		case 'a':
			printf("A letra digitada foi %c, que e uma vogal!", letra);
			break;
			
		case 'e':
			printf("A letra digitada foi %c, que e uma vogal!", letra);
			break;
			
		case 'i':
			printf("A letra digitada foi %c, que e uma vogal!", letra);
			break;
			
		case 'o':
			printf("A letra digitada foi %c, que e uma vogal!", letra);
			break;
			
		case 'u':
			printf("A letra digitada foi %c, que e uma vogal!", letra);
			break;
			
    default:
    	   printf("A letra digitada foi %c, que e uma consoante", letra);
    	   break;
    	   
	}
	
	//Exercicio 4
	
		int retorno;
	
    printf("Digite o retorno do servidor aqui: ");
    scanf("%i", &retorno);
    
    switch (retorno) {
    	
    case 200 :
    	printf("O servidor esta OK!");
    	break;
    	
    case 400 :
    	printf("Pagina nao encontrada!");
    	break;
    	
    case 500 :
    	printf("Erro interno no servidor!");
    	break;
    	
    case 503 :
    	printf("Servico indisponivel!");
    	break;
    	
    default :
    	printf("Status de servidor invalido");
	}
}
