//10.MULTIPLICACION DE DOS DIGITOS MODO MANUAL
#include<iostream>
#include<conio.h>
#include<windows.h>
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
int n1,n2,res,n3,n4,n5,n6;
int uni,dec,uni1,dec1,uni2,dec2,uni3,dec3,cent1,cent2;
gotoxy(15,1);cout<<("MULTIPLICACION DE DOS DIGITOS MODO MANUAL ");


gotoxy(1,3);cout<<("INGRESE PRIMERA CANTIDAD: ");
cin>>n1;
gotoxy(1,4);cout<<("INGRESE SEGUNDA CANTIDAD: ");
cin>>n2;
res=n1*n2;

gotoxy(20,7);cout<<n1;
gotoxy(18,8);cout<<("X");
gotoxy(20,8);cout<<n2;
gotoxy(15,9);cout<<("___________");

	uni=n1%10; n1/= 10;
	dec=n1%10; n1/= 10;
    uni1=n2%10; n2/= 10;
	dec1=n2%10; n2/= 10;
	
n3=uni1*uni;
	uni2=n3%10; n3/= 10;
	dec2=n3%10; n3/= 10;
	cent1=n3%10; n3/= 10;

n4=uni1*dec+dec2;
n5=dec1*uni;
	uni3 = n5%10; n5/= 10;
	dec3 = n5%10; n5/= 10;
	cent2 = n5%10; n5/= 10;
	
n6=dec1*dec+dec3;
gotoxy(20,10);cout<<n4<<uni2;
gotoxy(19,11);cout<<n6<<uni3;
gotoxy(17,11);cout<<"+";
gotoxy(15,12);cout<<("___________");
gotoxy(19,13);cout<<res;

return 0;	
}



