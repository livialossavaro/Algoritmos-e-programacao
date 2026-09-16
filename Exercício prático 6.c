#include <stdio.h>
#include <string.h>

#define QUANTIDADE 10

int main () {

int i = 0, j = 0;
int opt, estoque[10][3], codigo[QUANTIDADE], preco[QUANTIDADE], busca, achou = 0, alterar;
char nome[10][50];

do {
	
printf("\n[1]-Cadastrar produtos\n[2]-Listar produtos\n[3]-Buscar pelo codigo\n[4]-Alterar quantidade em estoque\n[5]-Sair\n\nOpcao escolhida: ");
scanf("%i", &opt);

switch(opt) {
	
	case 1: 
	for(i= 0; i < QUANTIDADE;i++) {
		
		printf("\nCodigo do produto: ");
		scanf("%i", &codigo[i]);
		
		printf("Nome do produto: ");
		fflush(stdin);
		gets(nome[i]);

		printf("Preco do produto: ");
		scanf("%i", &preco[i]);
		
		printf("Quantidade em estoque: ");
		scanf("%i",&estoque[i][0]);
		
		printf("Corredor: ");
		scanf("%i", &estoque[i][1]);
		
		printf("Pratileira: ");
		scanf("%i", &estoque[i][2]);
	}
	    break;
	
		case 2: 
		
		for(i = 0; i < QUANTIDADE; i++) {
		
		printf("\nCodigo do produto: %i", codigo[i]);
		
		printf("\nNome do produto: %s", nome[i]);
		fflush(stdin);
	
		printf("\nPreco do produto: %i", preco[i]);
		
		printf("\nQuantidade em estoque: %i", estoque[i][0]);
		
		printf("\nCorredor: %i", estoque[i][1]);
		
		printf("\nPratileira: %i\n", estoque[i][2]);		
    }
        break;
        
        case 3:
        	
        printf("\nDigite o codigo que deseja buscar: ");                                
        scanf("%i", &busca);
        
        for (i = 0; i < QUANTIDADE; i++) {
        	
        if (busca == codigo[i]) {
        		
			
        	printf("\nCodigo do produto: %i", codigo[i]);
		
			printf("\nNome do produto: %s", nome[i]);
			fflush(stdin);
	
			printf("\nPreco do produto: %i", preco[i]);
		
			printf("\nQuantidade em estoque: %i", estoque[i][0]);
			
			printf("\nCorredor: %i", estoque[i][1]);
			
			printf("\nPratileira: %i\n", estoque[i][2]);	
        	
			achou = 1;	
			
			break;
			}
		}
			
			if (achou == 0) {
				printf("Produto nao encontrado!\n");
			}
			break;
		
		case 4: 
		
		printf("\nDigite o codigo do produto que deseja alterar o estoque: ");     
        scanf("%i", &alterar);
        
        for (i = 0; i < QUANTIDADE; i++) {
        if (alterar == codigo[i]) {
        	printf("Estoque atual: %i", estoque[i][0]);
        	printf("\nNovo valor de estoque: ");
        	scanf("%i", &estoque[i][0]);
		}
			}	
				}
					}

while(opt != 5);

return 0;
}
