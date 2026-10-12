#include <stdio.h>

int main(){
	
	int num;
	float real;
	
	num = 12;
	real = 5.99;
	
	printf("Número inteiro (especificador decimal): %d",num);
	//exibiu corretamente
	printf("\nNúmero inteiro (especificador hexadecimal): %x",num);
	//exibiu o equivalente de 12 em hexadecimal
	
	printf("\n\nNúmero real (especificador float): %f",real);
	//exibiu o número com alguns 0 a mais
	printf("\nNúmero real (especificador float 1 casa): %.1f",real);
	//exibiu o número com uma casa após a virgula e arredondado
	
	return 0;
}