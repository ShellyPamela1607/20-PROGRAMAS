//9. Todas las tablas del 1 al 10
#include <iostream>

using namespace std;

int main(){
	system ("color F2");

	int i,x,res;
	for(i=1;i<=10;i++){
		for(x=0;x<=10;x++){
		res=i*x;
		cout<<i<<"*"<<x<<"="<<res<<endl;
		}
		cout<<endl;
	}
return 0;	
}
