//20. Resolver ecuaciones de segundo grado
#include <iostream>
#include <math.h>

using namespace std;
int main(){

         float A,B,C,resp,res,solu1,solu2;
		 
		 cout<<"RESOLUCION DE ECUACIONES DE SEGUNDO GRADO"<<endl<<endl;
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
				cout<<"LOS RESULTADOS DE LA ECUACION SON: "<<solu1<<" Y "<<solu2<<endl;

         }
return 0;
}
