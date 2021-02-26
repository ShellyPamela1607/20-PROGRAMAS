//13. Crear Figuras Geométricas Básicas
#include <iostream>
#include<conio.h>
#include <windows.h>

void gotoxy(int x,int y){                          ///Inicio funcion (x,y)
      HANDLE hcon;                                  ///
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);       ///
      COORD dwPos;                                  ///
      dwPos.X = x;                                  ///
      dwPos.Y= y;                                   ///
      SetConsoleCursorPosition(hcon,dwPos);         ///
 }       

using namespace std;

void cuadrado ();
void rectangulo ();
void triangulo ();
void rombo ();
//void circulo ();

int main(){

	int op;
	cout<< "FIGURAS GEOMETRICAS BASICAS "<<endl;
	cout<< "1. Cuadrado "<<endl;
	cout<< "2. Rectangulo "<<endl;
	cout<< "3. Triangulo "<<endl;
	cout<< "4. Rombo "<<endl;
//	cout<< "5. Circulo "<<endl;
	cout<< "SELECCIONE LA FIGURA: "<<endl;	
	cin>>op;
	system ("cls");
	
	switch(op){
		case 1:
			cuadrado();
			break;
		case 2:
			rectangulo ();

			break;
		case 3:
			 triangulo ();

			break;
		case 4:
			 rombo ();

			break;
		/*case 5:
			circulo ();
			break;	*/
		default: 
	 	cout<<"NO EXISTE ESA FIGURA" ;
	 	break;
	}
	
return 0;
}

void cuadrado(){
gotoxy(35,1);	cout<< "CUADRADO"<<endl;
	
	int i;
	for(i=15; i<60; i++) 
	{	
	gotoxy(i,5);
  	printf("%c",219);
  	Sleep(40);
	}
	for(i=5; i<25; i++) 
	{	
	gotoxy(15,i);
  	printf("%c",219);
  	Sleep(40);
	}
	for(i=15; i<60; i++) 
	{	
	gotoxy(i,25);
  	printf("%c",219);
  	Sleep(40);
	}
	for(i=5; i<26; i++) 
	{	
	gotoxy(60,i);
  	printf("%c",219);
  	Sleep(40);
	}
	
}

void rectangulo(){
gotoxy(35,1);	cout<< "RECTANGULO"<<endl;
	int i;
	for(i=15; i<30; i++) 
	{	
	gotoxy(i,5);
  	printf("%c",219);
  	Sleep(40);
	}
	for(i=5; i<25; i++) 
	{	
	gotoxy(15,i);
  	printf("%c",219);
  	Sleep(40);
	}
	for(i=15; i<30; i++) 
	{	
	gotoxy(i,25);
  	printf("%c",219);
  	Sleep(40);
	}
	for(i=5; i<26; i++) 
	{	
	gotoxy(30,i);
  	printf("%c",219);
  	Sleep(40);
	}
}

void triangulo(){
gotoxy(35,1);	cout<< "TRIANGULO"<<endl;
int i,j;

gotoxy(7,12); printf("%c",219);
gotoxy(8,11); printf("%c",219);
gotoxy(9,10); printf("%c",219);
gotoxy(10,9); printf("%c",219);
gotoxy(11,8); printf("%c",219);
gotoxy(12,7); printf("%c",219);
gotoxy(13,6); printf("%c",219);
gotoxy(14,5); printf("%c",219);
gotoxy(15,4); printf("%c",219);
gotoxy(16,3); printf("%c",219);

for(i=9; i<24; i++) 
	{	
	gotoxy(i,12);
  	printf("%c",219);
  	Sleep(40);
	}
	
gotoxy(16,3); printf("%c",219);
gotoxy(17,4); printf("%c",219);
gotoxy(18,5); printf("%c",219);
gotoxy(19,6); printf("%c",219);
gotoxy(20,7); printf("%c",219);
gotoxy(21,8); printf("%c",219);
gotoxy(22,9); printf("%c",219);
gotoxy(23,10); printf("%c",219);
gotoxy(24,11); printf("%c",219);
gotoxy(25,12); printf("%c",219);	


}

void rombo(){
gotoxy(35,1);	cout<< "ROMBO"<<endl;


gotoxy(9,10); printf("%c",219);
gotoxy(10,9); printf("%c",219);
gotoxy(11,8); printf("%c",219);
gotoxy(12,7); printf("%c",219);
gotoxy(13,6); printf("%c",219);
gotoxy(14,5); printf("%c",219);
gotoxy(15,4); printf("%c",219);
gotoxy(16,3); printf("%c",219);

gotoxy(16,3); printf("%c",219);
gotoxy(17,4); printf("%c",219);
gotoxy(18,5); printf("%c",219);
gotoxy(19,6); printf("%c",219);
gotoxy(20,7); printf("%c",219);
gotoxy(21,8); printf("%c",219);
gotoxy(22,9); printf("%c",219);
gotoxy(23,10); printf("%c",219);

gotoxy(22,11); printf("%c",219);
gotoxy(21,12); printf("%c",219);	
gotoxy(20,13); printf("%c",219);
gotoxy(19,14); printf("%c",219);
gotoxy(18,15); printf("%c",219);
gotoxy(17,16); printf("%c",219);
gotoxy(16,17); printf("%c",219);

gotoxy(15,16); printf("%c",219);
gotoxy(14,15); printf("%c",219);
gotoxy(13,14); printf("%c",219);
gotoxy(12,13); printf("%c",219);
gotoxy(11,12); printf("%c",219);
gotoxy(10,11); printf("%c",219);
gotoxy(9,10); printf("%c",219);


gotoxy(45,25); printf(" ");
}

/*void circulo(){
gotoxy(35,1);	cout<< "CIRCULO"<<endl;

gotoxy(30,6); printf("%c",219);
gotoxy(29,7); printf("%c",219);
gotoxy(28,8); printf("%c",219);
gotoxy(27,9); printf("%c",219);
gotoxy(26,10); printf("%c",219);
gotoxy(25,11); printf("%c",219);
gotoxy(24,12); printf("%c",219);
gotoxy(23,13); printf("%c",219);
}*/
