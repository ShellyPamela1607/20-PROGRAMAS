//16. Calcular la Hipotenusa

#include<iostream>
#include<math.h>
#include"windows.h"
#include"conio.h"
#include<iomanip>

void gotoxy(int x, int y){
HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X=x;
dwPos.Y=y; 
SetConsoleCursorPosition(hcon,dwPos); 
}

using namespace std;
int main(){
	float opuesto,adyacente,hipotenusa;
	
	gotoxy(35,1);	cout<< "CALCULAR LA HIPOTENUSA"<<endl;
	cout<< " INGRESE EL CATETO OPUESTO"<<endl;
	cin>>opuesto;
	cout<< " INGRESE EL CATETO ADYACENTE"<<endl;
	cin>>adyacente;
	
	hipotenusa= sqrt((opuesto*opuesto)+(adyacente*adyacente));
	
	cout<<setprecision(3)<<"LA HIPOTENUSA ES: "<<hipotenusa;
	
	return 0;
}

