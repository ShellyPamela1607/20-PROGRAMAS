//11. Conversión de numeros decimales a binarios

#include <stdio.h>

using namespace std;

int main(){
	
	int num;
	int binario[999];
	int i=0;
	
	printf("INGRESE UN NUMERO DECIMAL: ");
	scanf ("%i",&num);
	
	while (num !=0){
		binario [i]=num%2;
		num=num/2;
		i++;
	}
	
	i--;
	printf("EN BINARIO ES: ");
	
	while (i>=0){
		printf("%i",binario[i]);
		i--;
	}
	
	return 0;
}
