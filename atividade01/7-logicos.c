#include <stdio.h>

int main(){
	
	int idade,cnh;
	
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	printf("Voce possui carteira de habilitação? Digite 0 para não e 1 para sim.");
	scanf("%d",&cnh);
	
	while(cnh!=0 && cnh!=1){
		printf("\nOpção inválida! Reinicie o programa.");
		return 0;
	}
	
	if (idade>=18 && cnh==1){
		printf("\n1. Você pode dirigir sozinho.");
	}
	else{
		printf("\n0. Você não pode dirigir sozinho.");
	}
	
	return 0;
}