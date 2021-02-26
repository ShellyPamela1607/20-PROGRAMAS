//2. Determinar si un numero es par o impar

#include <iostream>

using namespace std;

int main(){
	
	system ("color F2");
	
	int num;
	
	cout<<"INGRESE UN NUMERO: ";
	cin>>num;
	
	if(num==0){
	cout<<endl<<"EL NUMERO ES CERO";	
	} else if(num %2==0){
		cout<<endl<<"EL NUMERO ES PAR";
	} else {
		cout<<endl<<"EL NUMERO ES IMPAR";
	}
	
return 0;	
}
