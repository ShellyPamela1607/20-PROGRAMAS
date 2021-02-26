//19. Promedio de numeros
#include <iostream>
#include<iomanip>

using namespace std;
int main(){
float n,suma,prom;
int num=0;
char res;

cout<<"SACAR EL PROMEDIO DE LOS NUMEROS INGRESADOS"<<endl<<endl;

do{
	cout<<"INGRESE UN NUMERO ";
	cin>>n;
	
	suma=suma+n;
	
	num++;
	cout<<"DESEA INGRESAR OTRO NUMERO? S/N ";
	cin>>res;
	
}while (res=='s');

prom=suma/num;
cout<<"INGRESO "<<num<<" NUMEROS"<<endl;
cout<<"LA SUMA DE LOS NUMEROS ES "<<suma<<endl;
cout<<setprecision(3)<<"EL PROMEDIO ES "<<prom<<endl;

return 0;
}
