//MENU 20 PROGRAMAS

#include <iostream>
#include <string.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#include<iomanip>
#include<stdio.h>

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
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

using namespace std;
void menu();
void operaciones_matematicas();
void par_impar();
void conversiones();
void palindromo();
void romanos();
void numeros_letras();
void decimales_letras();
void tabla_multiplicar();
void tablas_multiplicar();
void multiplicacion_manual();
void binarios();
void hexadecimal();
void figuras_geometricas();
	void cuadrado ();
	void rectangulo ();
	void triangulo ();
	void rombo ();
void punto();
void cajero();
void hipotenusa();
void linea_carga();
void imc();
void promedio();
void ecuaciones();


int main(){
system ("color F0");
  menu();
}

void menu(){
 int programa;
gotoxy(35,1); cout<<"20 PROGRAMAS"<<endl<<endl;
	 cout<<"1. OPERACIONES MATEMATICAS "<<endl;
	 cout<<"2. DETERMINAR SI EL NUMERO ES PAR O IMPAR "<<endl;
	 cout<<"3. CONVERTIR DE KILOMETROS A MILLAS, METROS A PULGADAS, DE LIBRAS A KILOS Y VICEVERSA "<<endl;
	 cout<<"4. DETERMINAR SI UNA PALABRA O UN NUMERO ES PALINDROMO "<<endl;
	 cout<<"5. CONVERTIR DE NUMEROS ARABIGOS A ROMANOS "<<endl;	
	 cout<<"6. CONVERTIR DE NUMEROS ENTEROS A LETRAS"<<endl;
	 cout<<"7. CONVERTIR DE NUMEROS DECIMALES A LETRAS"<<endl;
	 cout<<"8. UNA TABLA DE MULTIPLICAR"<<endl;
	 cout<<"9. TABLAS DE MULTIPLICAR DEL 1 AL 10"<<endl;
	 cout<<"10. MULTIPLICACION DE DOS DIGITOS MODO MANUAL"<<endl;
	 cout<<"11. CONVERTIR DE NUMEROS DECIMALES A BINARIOS"<<endl;
	 cout<<"12. CONVERTIR DE NUMEROS DECIMALES A HEXADECIMALES"<<endl;
	 cout<<"13. FIGURAS GEOMETRICAS BASICAS"<<endl;
	 cout<<"14. MOVER UN PUNTO POR TODA LA PANTALLA CON LAS TECLAS"<<endl;
	 cout<<"15. SIMULACION DE UN CAJERO"<<endl;
	 cout<<"16. CALCULAR LA HIPOTENUSA"<<endl;
	 cout<<"17. LINEA CARGA"<<endl;
	 cout<<"18. CALCULADORA DE IMC EN ADULTOS"<<endl;
	 cout<<"19. PROMEDIO DE NUMEROS"<<endl;
	 cout<<"20. RESOLVER ECUACIONES DE SEGUNDO GRADO"<<endl;
	 cout<<endl<<"SELECCIONE EL PROGRAMA QUE DESEA EJECUTAR"<<endl;
	 cin>>programa;
	 system("cls");
	 
	switch (programa){
	 	case 1:	
	 		operaciones_matematicas();
	 	break;
	 	
	 	case 2:
	 		par_impar();
	 	break;
	 	
	 	case 3:
	 		conversiones();
	 	break;
	 	
	 	case 4:
	 		palindromo();
	 	break;
	 	
	 	case 5:
	 		romanos();
	 	break;
	 	
		case 6:
	 		numeros_letras();
	 	break;
	 	
	 	case 7:
	 		decimales_letras();
	 	break;
	 	
		case 8:
	 		tabla_multiplicar();
	 	break;
	 	
	 	case 9:
	 		tablas_multiplicar();
	 	break;
	 	
	 	case 10:
	 		multiplicacion_manual();
	 	break;
	 	
	 	case 11:
	 		binarios();
	 	break;

		case 12:
	 		hexadecimal();
	 	break;	
		
		case 13:
	 		figuras_geometricas();
	 	break;  	
	 	
	 	case 14:
	 		punto();
	 	break;
		   	
	 	case 15:
	 		cajero();
	 	break;
	 	
	 	case 16:
	 		hipotenusa();
	 	break;
	 	
		case 17:
	 		linea_carga();
	 	break;
	 	
	 	case 18:
	 		imc();
	 	break;
	 	
		case 19:
	 		promedio();
	 	break;
		
		case 20:
	 		ecuaciones();
	 	break;
	}
}

void ecuaciones(){
	
         float A,B,C,resp,res,solu1,solu2;
		 
		 gotoxy(20,1);cout<<"RESOLUCION DE ECUACIONES DE SEGUNDO GRADO"<<endl<<endl;
		 cout<<"INTRODUCIR EL COEFICIENTE A: "<<endl; 
		 cin>>A;
		 cout<<"INTRODUCIR EL COEFICIENTE B: "<<endl; 
		 cin>>B;
		 cout<<"INTRODUCIR EL COEFICIENTE C: "<<endl; 
		 cin>>C;

         resp=B*B-4*A*C;

         if(resp<0){
				cout<<"NO TIENE SOLUCION"<<endl;
         }else if(resp==0){

            	res=-B/2*A;
				cout<<"EL RESULTADO ES: "<<res<<endl;

         }else{

                solu1=(-B+sqrt(res))/(2*A);
                solu2=(-B-sqrt(res))/(2*A);
				cout<<setprecision(3)<<"LOS RESULTADOS DE LA ECUACION SON: "<<solu1<<" Y "<<solu2<<endl<<endl;
			}
			
	int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		ecuaciones();
	}else 
	if (s_n!=1) {
		menu();
	}	
}

void promedio(){
	float n,suma,prom;
	int num=0;
	char res;
	
	gotoxy(20,1);cout<<"SACAR EL PROMEDIO DE LOS NUMEROS INGRESADOS"<<endl<<endl;
	
	do{
		cout<<"INGRESE UN NUMERO ";
		cin>>n;
		
		suma=suma+n;
		
		num++;
		cout<<"DESEA INGRESAR OTRO NUMERO? S/N ";
		cin>>res;
		
	}while (res=='s' || res=='S');
	
	prom=suma/num;
	cout<<endl<<"INGRESO "<<num<<" NUMEROS"<<endl;
	cout<<"LA SUMA DE LOS NUMEROS ES "<<suma<<endl;
	cout<<setprecision(3)<<"EL PROMEDIO ES "<<prom<<endl<<endl;
	
	int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		promedio();
	}else 
	if (s_n!=1) {
		menu();
	}	
}

void imc(){
	float peso,altura,indice;
	
	gotoxy(35,1); cout<<"CALCULADORA DE IMC PARA ADULTOS"<<endl<<endl;
	cout<<"INGRESE SU PESO EN KG"<<endl;
	cin>>peso;
	cout<<"INGRESE SU ALURA EN M"<<endl;
	cin>>altura;
	
	indice=peso/(altura*altura);
	cout<<setprecision(3)<<"SU IMC ES: "<<indice<<endl;
	
	if(indice<18.5){
		cout<<"USTED ESTA BAJO DE PESO"<<endl;
	}else if(indice<=24.9){
		cout<<"USTED ESTA CON UN PESO NORMAL"<<endl;	
	}else if (indice<=29.9){
		cout<<"USTED ESTA CON SOBREPESO"<<endl;
	}else if (indice>=30){
		cout<<"USTED TIENE OBESIDAD"<<endl;
	}

	int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		imc();
	}else 
	if (s_n!=1) {
		menu();
	}	
}

void linea_carga(){
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
 
 int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		linea_carga();
	}else 
	if (s_n!=1) {
		menu();
	}	
}

void hipotenusa(){
	float opuesto,adyacente,hipo;
	
	gotoxy(35,1);	cout<< "CALCULAR LA HIPOTENUSA"<<endl;
	cout<< " INGRESE EL CATETO OPUESTO"<<endl;
	cin>>opuesto;
	cout<< " INGRESE EL CATETO ADYACENTE"<<endl;
	cin>>adyacente;
	
	hipo= sqrt((opuesto*opuesto)+(adyacente*adyacente));
	
	cout<<setprecision(3)<<"LA HIPOTENUSA ES: "<<hipo;

int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		hipotenusa();
	}else 
	if (s_n!=1) {
		menu();
	}	
}

void cajero(){
	int op,cuenta;
float monto;
float saldo=1000;
gotoxy(35,1);	cout<< "CAJERO AUTOMATICO "<<endl;
	cout<< "1. DEPOSITO "<<endl;
	cout<< "2. RETIRO "<<endl;
	cout<< "3. CONSULTA DE SALDO "<<endl;
	cout<< "4. PAGOS "<<endl;
	cout<< "5. TRANSFERENCIAS "<<endl;
	cout<< "SELECCIONE LA ACCION QUE DESEA REALIZAR: "<<endl;	
	cin>>op;
	system ("cls");
	
	switch(op){
		case 1:
			cout<< "INGRESE LA CANTIDAD A DEPOSITAR"<<endl;
			cin>>monto;
			saldo=saldo+monto;
			cout<< "SU SALDO ACTUAL DISPONIBLE ES: Q"<<saldo<<endl;
		break;
			
		case 2:
			cout<< "INGRESE LA CANTIDAD A RETIRAR"<<endl;
			cin>>monto;
			saldo=saldo-monto;
			cout<< "SU SALDO ACTUAL DISPONIBLE ES: Q"<<saldo<<endl;
		break;
		
		case 3:
			cout<< "SU SALDO ACTUAL DISPONIBLE ES: Q"<<saldo<<endl;
		break;
		
		case 4:
			gotoxy(35,1); cout<< "PAGOS DE SERVICIOS BASICOS"<<endl;
			cout<< "1.EMPRESA ELECTRICA "<<endl;
			cout<< "2.DEPARTAMENTO DE AGUAS "<<endl;
			cin>>op;
			system ("cls");
			
			switch(op){
			case 1:
			gotoxy(35,1);	cout<< "PAGOS DE LA EMPRESA ELECTRICA"<<endl;
			cout<< "INGRESE EL MONTO A PAGAR"<<endl;
			cin>>monto;	
			system ("cls");
			cout<<"PAGO REALIZADO"<<endl;
			saldo=saldo-monto;	
			cout<< "SU SALDO ACTUAL DISPONIBLE ES: Q"<<saldo<<endl;
			break;	
			case 2:
			gotoxy(35,1);	cout<< "PAGOS DEL DEPARTAMENTO DE AGUAS"<<endl;
			cout<< "INGRESE EL MONTO A PAGAR"<<endl;
			cin>>monto;	
			system ("cls");
			cout<<"PAGO REALIZADO"<<endl;
			saldo=saldo-monto;	
			cout<< "SU SALDO ACTUAL DISPONIBLE ES: Q"<<saldo<<endl;
			break;
			}
					
		break;
		
		case 5:
			cout<< "INGRESE EL NUMERO DE CUENTA AL QUE DESEA REALIZAR LA TRANSFERENCIA"<<endl;
			cin>>cuenta;
			cout<<"INGRESE EL MONTO A DEPOSITAR Q.";
			cin>>monto;
			system ("cls");
			if(monto<=1500){
				saldo=saldo-monto;
				cout<<"TRANSFERENCIA EXITOSA"<<endl;
				cout<< "SU SALDO ACTUAL DISPONIBLE ES: Q"<<saldo<<endl;
			} else if(monto>1500){
				cout<<"FALLO EN LA TRANSFERENCIA";
			}
		break;
					
		default: 
	 	cout<<"NO EXISTE ESA OPCION" ;
	 	break;
	}
	int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		cajero();
	}else 
	if (s_n!=1) {
		menu();
	}	
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
	cout<< "*"<<endl;
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

void punto(){

OcultarCursor();

	Punto P(7,7);
	P.pintar();
		
		
		P.mover();
				
}

void figuras_geometricas(){
		int op;
	cout<< "FIGURAS GEOMETRICAS BASICAS "<<endl;
	cout<< "1. Cuadrado "<<endl;
	cout<< "2. Rectangulo "<<endl;
	cout<< "3. Triangulo "<<endl;
	cout<< "4. Rombo "<<endl;
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
		default: 
	 	cout<<"NO EXISTE ESA FIGURA" ;
	 	break;
	}
int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		figuras_geometricas();
	}else 
	if (s_n!=1) {
		menu();
	}	
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

void hexadecimal(){
	int hexa [999];
	int num, residuo, resultado, i=0;
	
	cout<< "INGRESA UN NUMERO DECIMAL: "<<endl;
	cin>>num;
	
	do{
		residuo = num%16;
		resultado= num/16;
		hexa[i]=residuo;
		num = resultado;
		i++;
	}while(resultado > 15);
	
	hexa[i] = resultado;
	
	cout<< "EN HEXADECIMAL ES: "<<endl;
	
	for (int j=i; j>=0; j--){
		if (hexa[j] == 10){
			cout<<"A";
		} else if (hexa[j] == 11){
			cout<<"B";
		}else if (hexa[j] == 12){
			cout<<"C";
		}else if (hexa[j] == 13){
			cout<<"D";
		}else if (hexa[j] == 14){
			cout<<"E";
		}else if (hexa[j] == 15){
			cout<<"F";
		}else{
			cout<<hexa[j];
		}
		
	}
	
	
int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		hexadecimal();
	}else 
	if (s_n!=1) {
		menu();
	}	
}

void binarios(){
	int num;
	int binario[999];
	int i=0;
	
	printf("INGRESE UN NUMERO DECIMAL: ");
	scanf ("%i",&num);
	
	while (num !=0){
		binario [i]=num%2;
		num=num/2;
		i++;
	}
	
	i--;
	printf("EN BINARIO ES: ");
	
	while (i>=0){
		printf("%i",binario[i]);
		i--;
	}
int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		binarios();
	}else 
	if (s_n!=1) {
		menu();
	}	
}

void multiplicacion_manual(){
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

int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		multiplicacion_manual();
	}else 
	if (s_n!=1) {
		menu();
	}	
}

void  tablas_multiplicar(){
	int i,x,res;
	for(i=1;i<=10;i++){
		for(x=0;x<=10;x++){
		res=i*x;
		cout<<i<<"*"<<x<<"="<<res<<endl;
		}
		cout<<endl;
	}
int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		tablas_multiplicar();
	}else 
	if (s_n!=1) {
		menu();
	}	
}

void tabla_multiplicar(){
	int num,x,res;
	cout<<"INGRESE UN NUMERO PARA MULTIPLICAR: ";
	cin>>num;
	system("cls");
	
	for(x=0;x<=10;x++){
		
		res=num*x;
		cout<<num<<"*"<<x<<"="<<res<<endl;
		
	} 
int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		tabla_multiplicar();
	}else 
	if (s_n!=1) {
		menu();
	}	
}

void decimales_letras(){
	int x,d;
	
    cout<<"INGRESO DE DATOS"<<endl;
    cout<<"INGRESE LOS ENTEROS DEL 0 AL 1000"<<endl;
    cin>>x;
    cout<<"INGRESE LOS DECIMALES DEL 1 AL 99"<<endl;
    cin>>d;

if((x<0)||(x>1000)) cout<<"NO ES VALIDO ESE NUMERO"<<endl;
else
 
    {
    	if (x==0) {cout<<"CERO ";x=x-0;}
    	if (x==1000)   {cout<<"MIL ";x=x-1000;}
        if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       }
       
       
 if((d<01)||(d>99)) cout<<"NO ES VALIDO ESE NUMERO"<<endl;
else
 
    {
    
        if(d>90) {cout<<" CON NOVENTA Y "   ;d=d-90; }
            if(d==90)   {cout<<" CON NOVENTA"  ;d=d-90; }  
            if(d>80) {cout<<" CON OCHENTA Y "   ;d=d-80; }
            if(d==80)   {cout<<" CON OCHENTA"  ;d=d-80; }
            if(d>70) {cout<<" CON SETENTA Y "   ;d=d-70; }
            if(d==70)   {cout<<" CON SETENTA"  ;d=d-70; }
            if(d>60) {cout<<" CON SESENTA Y "   ;d=d-60; }
            if(d==60)   {cout<<" CON SESENTA"  ;d=d-60; }
            if(d>50) {cout<<" CON CINCUENTA Y " ;d=d-50; }
            if(d==50)   {cout<<" CON CINCUENTA"    ;d=d-50; }
            if(d>40) {cout<<" CON CUARENTA Y "  ;d=d-40; }
            if(d==40)   {cout<<" CON CUARENTA" ;d=d-40; }
            if(d>30) {cout<<" CON TREINTA Y "   ;d=d-30; }
            if(d==30)   {cout<<" CON TREINTA"  ;d=d-30; }
            if(d>20) {cout<<" CON VEINTI"       ;d=d-20; }
            if(d==20)   {cout<<" CON VEINTE"       ;d=d-20; }
        if(d>=16)    {cout<<" CON DIECI"        ;d=d-10; }
       else if(d==15)   {cout<<" CON QUINCE"       ;d=d-15; }
       else if(d==14)   {cout<<" CON CATORCE"  ;d=d-14; }
       else if(d==13)   {cout<<" CON TRECE"        ;d=d-13; } 
       else if(d==12)   {cout<<" CON DOCE"     ;d=d-12; }
       else if(d==11)   {cout<<" CON ONCE"     ;d=d-11; }
       else if(d==10)   {cout<<" CON DIEZ"     ;d=d-10; }      
        if(d==9)    {cout<<"NUEVE"        ;d=d-9;  }
        if(d==8)    {cout<<"OCHO"     ;d=d-8;  }
        if(d==7)    {cout<<"SIETE"        ;d=d-7;  }
            if(d==6)    {cout<<"SEIS"     ;d=d-6;  }
       else if(d==5)    {cout<<"CINCO"        ;d=d-5;  }
       else if(d==4)    {cout<<"CUATRO"       ;d=d-4;  }
       else if(d==3)    {cout<<"TRES"     ;d=d-3;  }
       else if(d==2)    {cout<<"DOS"      ;d=d-2;  }
       else if(d==1)    {cout<<"UNO"      ;d=d-1;  }
       }
int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		decimales_letras();
	}else 
	if (s_n!=1) {
		menu();
	}	
}

void numeros_letras(){
int x;
    cout<<"INGRESE UN NUMERO DEL 0 AL 1000"<<endl;
    cin>>x;
if((x<0)||(x>1000)) cout<<"NO ES VALIDO ESE NUMERO"<<endl;
else
 
    {
    	if (x==0) {cout<<"CERO ";x=x-0;}
    	if (x==1000)   {cout<<"MIL ";x=x-1000;}
        if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       }	
int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		numeros_letras();
	}else 
	if (s_n!=1) {
		menu();
	}	
}

void romanos(){
	int num,uni,dec,cen,mil;
	
	cout<<"INGRESE UN NUMERO (1-3999): ";
	cin>>num;
	
	uni= num%10; num/= 10;
	dec= num%10; num/=10;
	cen= num%10; num/=10;
	mil= num%10; num/=10;
	
	switch(mil){
		case 1: cout<<"M"; break;
		case 2: cout<<"MM"; break;
		case 3: cout<<"MMM"; break;
	}
	
	switch(cen){
		case 1: cout<<"C"; break;
		case 2: cout<<"CC"; break;
		case 3: cout<<"CCC"; break;
		case 4: cout<<"CD"; break;
		case 5: cout<<"D"; break;
		case 6: cout<<"DC"; break;
		case 7: cout<<"DCC"; break;
		case 8: cout<<"DCCC"; break;
		case 9: cout<<"CM"; break;
	}
	
	switch(dec){
		case 1: cout<<"X"; break;
		case 2: cout<<"XX"; break;
		case 3: cout<<"XXX"; break;
		case 4: cout<<"XL"; break;
		case 5: cout<<"L"; break;
		case 6: cout<<"LX"; break;
		case 7: cout<<"LXX"; break;
		case 8: cout<<"LXX"; break;
		case 9: cout<<"XC"; break;
	}
	
	switch(uni){
		case 1: cout<<"I"; break;
		case 2: cout<<"II"; break;
		case 3: cout<<"III"; break;
		case 4: cout<<"IV"; break;
		case 5: cout<<"V"; break;
		case 6: cout<<"VI"; break;
		case 7: cout<<"VII"; break;
		case 8: cout<<"VIII"; break;
		case 9: cout<<"IX"; break;
	}
int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		romanos();
	}else 
	if (s_n!=1) {
		menu();
	}	
}

void palindromo(){
	string palabra;
	string res;
	int i = 0;
	
	cout<<"Ingrese una palabra o numero: ";
	cin>>palabra;
	
	cout<<endl;
	for(i=0;i<palabra.size();i++){
		cout<<" "<<palabra[i];
	}
	cout<<endl;
	for(i=palabra.size()-1;i>=0;i--){
		cout<<" "<<palabra[i];
		res	+= palabra[i];
	}
	cout<<endl;
	
	if (palabra==res){
		cout<<endl<<"La palabra o numero "<<palabra<<" SI es palindroma";
	}else {
		cout<<endl<<"La palabra o numero "<<palabra<<" NO es palindroma";
	}
int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		palindromo();
	}else 
	if (s_n!=1) {
		menu();
	}	
}

void conversiones(){
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
int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		conversiones();
	}else 
	if (s_n!=1) {
		menu();
	}	
}

void par_impar() {
	int num;
	
	cout<<"INGRESE UN NUMERO: ";
	cin>>num;
	
	if(num==0){
	cout<<endl<<"EL NUMERO ES CERO";	
	} else if(num %2==0){
		cout<<endl<<"EL NUMERO ES PAR";
	} else {
		cout<<endl<<"EL NUMERO ES IMPAR";
	}
int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		par_impar();
	}else 
	if (s_n!=1) {
		menu();
	}	
}

void operaciones_matematicas(){
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
int s_n;
	cout<<endl<<"DESEA REALIZAR OTRA OPERACION?"<<endl;
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>s_n;
	
	if(s_n==1){
		system("cls");
		operaciones_matematicas();
	}else 
	if (s_n!=1) {
		menu();
	}	
}
