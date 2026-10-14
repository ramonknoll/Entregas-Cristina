#include <stdio.h>

int main(){
	
	int numInt;
	float numReal;
	char cadeia[50] = "ramon";
	double pi;
	
	numInt = 6+7;
	numReal = 6.7;
	pi = 3.14;
	
	printf("%d",numInt);
	printf("%f\n",numReal);
	printf("%s\n",cadeia);
	printf("%.2f\n",pi);
	
	return 0;
}