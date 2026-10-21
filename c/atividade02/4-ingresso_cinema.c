#include <stdio.h>

int main(){
	
	int idade,estudante;
	
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	printf("Você é um estudante? 1 para sim ou 0 para não: ");
	scanf("%d",&estudante);
	
	if(idade<12){
		printf("Valor do ingresso: R$ 10,00.");
	}
	else{
		if(estudante==1){
			printf("Valor do ingresso: R$ 15,00.");
		}
		else{
			printf("Valor do ingresso: R$ 20,00.");
		}
	}
	
	return 0;
}