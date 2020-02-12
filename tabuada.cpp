#include <iostream>
using namespace std;
main(){
 char resp;
 int n,resultado,conta;
 
 
 	do{
	 
	cout<<"\n qual numero voce deseja calcular a tabuada?";
	cin>>n;
	
		for (conta=0;conta<=10; conta++){
			resultado=n*conta;
				cout<<"\n tabuada do numero "<<n<<" X "<<conta<<" = "<<resultado;
				}
				cout<<"\n Deseja fazer a tabuada de outro numero? (s/n) ";
				cin>>resp;
				
				
	}while(resp=='s'||resp=='S');
	
}
