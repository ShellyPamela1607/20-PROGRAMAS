//1. suma, resta, multiplicación, división de dos numeros

#include <iostream>

using namespace std;

int main(){
	
	system ("color F2");
	
	float n1,n2,res;
	int op;
	 cout<<"OPERACIONES MATEMATICAS"<<endl;
	 cout<<"1. suma"<<endl;
	 cout<<"2. resta"<<endl;
	 cout<<"3. multiplicacion"<<endl;
	 cout<<"4. division"<<endl<<endl;
	 cout<<"INGRESE EL NUMERO DE LA OPERACION QUE DESEA REALIZAR: ";
	 cin>>op;
	 system("cls");
	 
	 cout<<"INGRESE EL PRIMER NUMERO: ";
	 cin>>n1;
	 cout<<"INGRESE EL SEGUNDO NUMERO: ";
	 cin>>n2;
	 
	 switch (op){
	 	case 1:
	 	res=n1+n2;
	 	break;
	 	case 2:
	 	res=n1-n2;
	 	break;
	 	case 3:
	 	res=n1*n2;
	 	break;
	 	case 4:
	 	res=n1/n2;
	 	break;
	 	default: 
	 	cout<<"NO EXISTE ESA OPERACION" ;
	 	break;
	 }
	 
	 cout<<endl<< "EL RESULTADO ES: "<<res<<endl;
	 
	 
return 0;	
}
