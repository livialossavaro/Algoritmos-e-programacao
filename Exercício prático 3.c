#include <stdio.h>
#include <stdlib.h>

int main () {

int valor, opt;
float desconto;
printf("Valor a ser pago: ");
scanf("%i", &valor);

printf("\n\nMenu:");
printf("\n[1]Dinheiro\n[2]Cartao\n[3]Cartao parcelado");
printf("\n\nForma de pagamento: ");
scanf("%i", &opt);

switch (opt) {
	
	case 1: 
	
    desconto = valor * 0.9;
    printf("Valor com desconto: %.2f", desconto);
    break;
    
    case 2:
    	
    desconto = valor * 0.95;
    printf("Valor com desconto: %.2f", desconto);
    
    case 3:
	
	printf("Sem desconto"); 
}

if ( desconto > 100) {
	printf("\nCompra alta!");
}

return 0;
}
