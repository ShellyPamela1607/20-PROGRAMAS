//8. Una tabla de multiplicar
#include <iostream>

using namespace std;

int main(){
	system ("color F2");
	
	int num,x,res;
	cout<<"INGRESE UN NUMERO PARA MULTIPLICAR: ";
	cin>>num;
	system("cls");
	
	for(x=0;x<=10;x++){
		
		res=num*x;
		cout<<num<<"*"<<x<<"="<<res<<endl;
		
	} 
return 0;
}
