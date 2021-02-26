//18. Calcular el indice de masa corporal
#include <iostream>
#include<conio.h>
#include<windows.h>
#include<iomanip>

using namespace std;

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 

int main(){
	float peso,altura,imc;
	
gotoxy(35,1); cout<<"CALCULADORA DE IMC PARA ADULTOS"<<endl<<endl;
cout<<"INGRESE SU PESO EN KG"<<endl;
cin>>peso;
cout<<"INGRESE SU ALURA EN M"<<endl;
cin>>altura;

imc=peso/(altura*altura);
cout<<setprecision(3)<<"SU IMC ES: "<<imc<<endl;

if(imc<18.5){
	cout<<"USTED ESTA BAJO DE PESO"<<endl;
}else if(imc<=24.9){
	cout<<"USTED ESTA CON UN PESO NORMAL"<<endl;	
}else if (imc<=29.9){
	cout<<"USTED ESTA CON SOBREPESO"<<endl;
}else if (imc>=30){
	cout<<"USTED TIENE OBESIDAD"<<endl;
}

return 0;
}

