#include <stdio.h>

int main(){
	
	int n1,n2;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&n1);
	printf("Digite outro número inteiro: ");
	scanf("%d",&n2);
	
	printf("\nResultados: (0 = falso; 1 = verdadeiro)");
	printf("\nIgual: %d",n1==n2);
	printf("\nDiferente: %d",n1!=n2);
	printf("\nMaior que: %d",n1>n2);
	printf("\nMenor que: %d",n1<n2);
	printf("\nMaior ou igual a: %d",n1>=n2);
	printf("\nMenor ou igual a: %d",n1<=n2);
	
	return 0;
}