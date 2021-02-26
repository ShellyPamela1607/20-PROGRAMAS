//12. Conversión de números decimales a hexadecimales

#include <iostream>

using namespace std;

int main(){
	
	int hexadecimal [999];
	int num, residuo, resultado, i=0;
	
	cout<< "INGRESA UN NUMERO DECIMAL: "<<endl;
	cin>>num;
	
	do{
		residuo = num%16;
		resultado= num/16;
		hexadecimal[i]=residuo;
		num = resultado;
		i++;
	}while(resultado > 15);
	
	hexadecimal[i] = resultado;
	
	cout<< "EN HEXADECIMAL ES: "<<endl;
	
	for (int j=i; j>=0; j--){
		if (hexadecimal[j] == 10){
			cout<<"A";
		} else if (hexadecimal[j] == 11){
			cout<<"B";
		}else if (hexadecimal[j] == 12){
			cout<<"C";
		}else if (hexadecimal[j] == 13){
			cout<<"D";
		}else if (hexadecimal[j] == 14){
			cout<<"E";
		}else if (hexadecimal[j] == 15){
			cout<<"F";
		}else{
			cout<<hexadecimal[j];
		}
		
	}
	cout<<endl;
	return 0;
}




