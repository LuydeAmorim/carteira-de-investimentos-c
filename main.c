#include <stdio.h>
#include "funcoes.h"

int main(void){
	int escolha = 0;
	
	while (escolha != 4){
		
	exibirMenu();
	
	if (scanf("%d", &escolha) != 1) {
    printf("Entrada invalida! Digite um numero.\n");

    while (getchar() != '\n');
    continue;
	}
	
	switch (escolha){
		
		case 1:
			cadastrar();
			break;
			
		case 2:
			calcular();
			break;
		
		case 3:
			risco();
			break;
		
		case 4:
			printf("Saindo...\n");
			break;
				
		default:
	    	printf("Opcao invalida!\n");
	    	break;	
		}
		
	}
	return 0;
}
