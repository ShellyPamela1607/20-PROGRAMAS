//4. Determinar si una palabra o un número es palíndromo.}
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	system ("color F2");
	
	string palabra;
	string res;
	int i = 0;
	
	cout<<"Ingrese una palabra o numero: ";
	cin>>palabra;
	
	cout<<endl;
	for(i=0;i<palabra.size();i++){
		cout<<" "<<palabra[i];
	}
	cout<<endl;
	for(i=palabra.size()-1;i>=0;i--){
		cout<<" "<<palabra[i];
		res	+= palabra[i];
	}
	cout<<endl;
	
	if (palabra==res){
		cout<<endl<<"La palabra o numero "<<palabra<<" SI es palindroma";
	}else {
		cout<<endl<<"La palabra o numero "<<palabra<<" NO es palindroma";
	}
	
	return 0;
}
