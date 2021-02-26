//7. Conversión de números decimales a letras

#include <iostream>

using namespace std;

int main(){
	
	system ("color F2");
	
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
      
	return 0;
}

