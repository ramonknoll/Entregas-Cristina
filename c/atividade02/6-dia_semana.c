#include <stdio.h>

int main(){
	
	int num;
	
	printf("Digite um número de 1 a 7: ");
	scanf("%d",&num);
	
	switch(num){
		case 1:
			printf("\nDomingo.");
			break;
		case 2:
			printf("\nSegunda-feira.");
			break;
		case 3:
			printf("\nTerça-feira.");
			break;
		case 4:
			printf("\nQuarta-feira.");
			break;
		case 5:
			printf("\nQuinta-feira.");
			break;
		case 6:
			printf("\nSexta-feira.");
			break;
		case 7:
			printf("\nSábado.");
			break;
		default:
			printf("\nNúmero inválido!");
	}
	
	return 0;
}