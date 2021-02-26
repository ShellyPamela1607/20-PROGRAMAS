//17. LINEA DE CARGA
#include<stdio.h>
#include<conio.h>
#include <windows.h>

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 
 
 int main(){
 	int x,y,i;
 //ubicacion cargando
 gotoxy(35,10);
 printf("CARGANDO");
   
 
 for(i=1; i<80; i++) //largo linea carga
 {
 	
  gotoxy(i,13);//columna 13 ubi linea carga
  
  printf("%c",219);//codigo ascii
  
  for(x=55;x<65;x++){  //rapidez lineas carga
   
   for(y=1;y<80;y++){  //donde llegan lineas de abajo
    //columna 18 ubi lineas abajo
	gotoxy(y,18);
   }
  }
 }
 
 gotoxy(30,20);
 printf("CARGA COMPLETA");
 
 printf("\n \n puede salir presionando cualquier tecla \n");
 }
