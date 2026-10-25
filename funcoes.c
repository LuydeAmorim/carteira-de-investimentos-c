#include <stdio.h>
#include "funcoes.h"

char nome[30];
char categoria[20];
int quantidadeAtivos = 0;
float precoCompra;
float precoAtual;
float rentabilidade;
void exibirMenu(void) {
	
    printf("\n=== Carteira de Investimentos ===\n");	
	printf("1 - Cadastrar\n");	
	printf("2 - Rentabilidade/lucro\n");
	printf("3 - Classificar risco\n");	
	printf("4 - Sair\n\n");
	printf("\n");
	printf("ESCOLHA: ");
}


void cadastrar (void){	

		printf("Digite o nome: ");
	scanf("%29s", nome);
	
		printf("Digite a categoria: ");
	scanf("%19s", categoria);
	
		printf("Digite a quantidade: ");
	scanf("%d", &quantidadeAtivos);
	
		printf("Digite o preco de compra: R$ ");
	scanf("%f", &precoCompra);
	
		printf("Digite o preco atual: R$ ");
	scanf("%f", &precoAtual);
	
	printf("\n=== Dados do Ativo ===\n");
	printf("Nome: %s\n", nome);
	printf("Categoria: %s\n", categoria);
	printf("Quantidade: %d\n", quantidadeAtivos);
	printf("Preco de compra: R$ %.2f\n", precoCompra);
	printf("Preco atual: R$ %.2f\n", precoAtual);
	
}

float calcular(void){
	
	printf("\n");
	
	float rentabilidade2 = (precoAtual - precoCompra) / precoCompra*100;
		printf("RENTABILIDADE: %.2f%%\n\n", rentabilidade2);
		
	float lucroPrejuizo = (precoAtual - precoCompra) * quantidadeAtivos;
		printf("LUCRO/PREJUIZO: R$ %.2f\n\n", lucroPrejuizo);

	return rentabilidade2;
}

void risco (void){
	
	 if (quantidadeAtivos == 0) {
        printf("\nNENHUMA ACAO CADASTRADA!\n");
        return;
    }
	
	rentabilidade = (precoAtual - precoCompra) / precoCompra*100;
	
	if (rentabilidade < -10){
		printf("\nCLASSIFICACAO DE RISCO: Alto\n");
		
	}else if(rentabilidade > -10 && rentabilidade <0){
		printf("\nCLASSIFICACAO DE RISCO: Moderado\n");
		
	}else if(rentabilidade == 0){
		printf("\nCLASSIFICACAO DE RISCO: Sem Variacao\n");
		
	}else if(rentabilidade > 0){
		printf("\nCLASSIFICACAO DE RISCO: Baixo\n");	
	}
		
}
