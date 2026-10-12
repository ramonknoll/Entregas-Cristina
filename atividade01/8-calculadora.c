#include <stdio.h>

int main(){
	
	float n1,n2;
	char op;
	
	printf("===CALCULADORA===");
	printf("\nDigite o primeiro número: ");
	scanf("%f",&n1);
	printf("Digite o segundo número:  ");
	scanf("%f",&n2);
	printf("Digite a operação (+,-,*,/): ");
	scanf(" %c",&op);
	
	switch(op){
		case '+':
			printf("\n%f",n1+n2);
			break;
		case '-':
			printf("\n%f",n1-n2);
			break;
		case '*':
			printf("\n%f",n1*n2);
			break;
		case '/':
			if (n2!=0){
				printf("\n%f",n1/n2);
			}
			else{
				printf("\nNão é possível dividir por 0. Reinicie o programa.");
			}
			break;
		default: 
			printf("\nOpção inválida. Reinicie o programa.");
	}
	
	return 0;
}