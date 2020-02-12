#include <iostream>
using namespace std;
main(){
	int op,i;
	
		do{
			cout<<"\n Digite a opcao desejada.";
			cout<<"\n 1 - Saque.";
			cout<<"\n 2 - Saldo.";
			cout<<"\n 3 - Extrato.";
			cin>>op;
		}while(op<1||op>3);
		
		for (i=0;i<10;i++){
			cout<<i;
		}
		
}

