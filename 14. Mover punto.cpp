//14. Mover un punto en toda la pantalla
#include<iostream>
#include"windows.h"
#include"conio.h"

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

using namespace std;
void gotoxy(int x, int y){
HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X=x;
dwPos.Y=y; 
SetConsoleCursorPosition(hcon,dwPos); 
}

void OcultarCursor(){
	HANDLE hCon;
	hCon = GetStdHandle (STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hCon,&cci );
	
}

class Punto{
	int x,y;
	public:
		Punto(int _x, int _y):x(_x),y(_y){}//constructor
		void pintar ();
		void borrar ();
		void mover ();
};



void Punto::pintar(){
	gotoxy(25,1);	cout<< "MOVER UN PUNTO CON TECLAS"<<endl;
	gotoxy(x,y); 
	cout<< "."<<endl;
}

void Punto::borrar(){
	gotoxy(x,y);
	cout<< " "<<endl;
}

void Punto::mover(){
char opcion;

while(opcion!='z'){
 system("cls");//si le quitamos esto el caracter dejara rastro desde el punto que sea movido 
pintar();
 opcion=getch();
 switch(opcion){
  
 case ARRIBA: y--; 
 break;
 
 case ABAJO: y++;
 break;
 
 case IZQUIERDA: x--;
 break;
 
 case DERECHA: x++;
 break;
 
  
 }
}
			
}

int main(){


OcultarCursor();

	Punto P(7,7);
	P.pintar();
		
		
		P.mover();
		Sleep(30);
		
	return 0;
	

}

