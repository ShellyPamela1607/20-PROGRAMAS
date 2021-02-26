//15. Cajero 
#include<iostream>
#include"windows.h"
#include"conio.h"

void gotoxy(int x, int y){
HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X=x;
dwPos.Y=y; 
SetConsoleCursorPosition(hcon,dwPos); 
}

using namespace std;

int main(){
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
	
return 0;
}

