//3. Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa

#include <iostream>

using namespace std;

int main(){
	
	system ("color F2");
	
	float num,res;
	int op;
	 cout<<"CONVERSIONES"<<endl;
	 cout<<"1. KILOMETROS A MILLAS"<<endl;
	 cout<<"2. MILLAS A KILOMETROS"<<endl;
	 cout<<"3. METROS A PULGADAS"<<endl;
	 cout<<"4. PULGADAS A METROS"<<endl;
	 cout<<"5. LIBRAS A KILOS"<<endl;
	 cout<<"6. KILOS A LIBRAS"<<endl<<endl;
	 cout<<"INGRESE EL NUMERO DE LA OPERACION QUE DESEA REALIZAR: ";
	 cin>>op;
	 system("cls");
	 
	 switch (op){
	 	case 1:
	 	cout<<"INGRESE LOS KILOMETROS: "<<endl;
	 	cin>>num;
	 	res=(num*1)/1.60934;
	 	cout<<endl<< num<< " Kilometros son "<<res<<" Millas"<<endl;
	 	break;
	 	
	 	case 2:
	 	cout<<"INGRESE LAS MILLAS: "<<endl;
	 	cin>>num;
	 	res=(num*1.60934)/1;
	 	cout<<endl<< num<< " Millas son "<<res<<" Kilometros"<<endl;
	 	break;
	 	
	 	case 3:
	 	cout<<"INGRESE LOS METROS: "<<endl;
	 	cin>>num;
	 	res=(num*39.37)/1;
	 	cout<<endl<< num<< " Metros son "<<res<<" Pulgadas"<<endl;
	 	break;
	 	
	 	case 4:
	 	cout<<"INGRESE LAS PULGADAS: "<<endl;
	 	cin>>num;
	 	res=(num*1)/39.37;
	 	cout<<endl<< num<< " Pulgadas son "<<res<<" Metros"<<endl;
	 	break;
	 	
	 	case 5:
	 	cout<<"INGRESE LAS LIBRAS: "<<endl;
	 	cin>>num;
	 	res=(num*1)/2.2046;
	 	cout<<endl<< num<< " Libras son "<<res<<" Kilos"<<endl;
	 	break;
	 	
	 	case 6:
	 	cout<<"INGRESE LOS KILOS: "<<endl;
	 	cin>>num;
	 	res=(num*2.2046)/1;
	 	cout<<endl<< num<< " Kilos son "<<res<<" Libras"<<endl;
	 	break;
	 	
	 	default: 
	 	cout<<"NO EXISTE ESA OPERACION" ;
	 	break;
	 }
	 
	 return 0;
}
