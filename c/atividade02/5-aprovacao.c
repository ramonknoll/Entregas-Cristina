#include <stdio.h>

int main(){
	
	float media,freq;
	
	printf("Digite a sua média final: ");
	scanf("%f",&media);
	printf("Digite a sua frequência em %, apenas números: ");
	scanf("%f",&freq);
	
	if(media>=6 && freq>=75){
		printf("Aprovado.");
	}
	else{
		printf("Reprovado.");
	}
	
	return 0;
}