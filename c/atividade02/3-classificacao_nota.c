#include <stdio.h>

int main(){
	
	float nota;
	
	printf("Digite uma nota de 0 a 10: ");
	scanf("%f",&nota);
	
	if(nota<6 && nota>=0){
		printf("Nota insuficiente.");
	}
	else if(nota>=6 && nota<=7.9){
		printf("Nota regular.");
	}
	else if(nota>=8 && nota<=8.9){
		printf("Nota boa.");
	}
	else if(nota>=9 && nota<=10){
		printf("Nota excelente.");
	}
	else if(nota<0 || nota>10){
		printf("Nota inválida!");
	}
		
	return 0;
}