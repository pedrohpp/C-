#include <iostream>;
using namespace std;
main(){
	int cand1 = 0,cand2 = 0,branco = 0,nulo = 0,resp;
	char resp2;
	
	do{	

		do{
		
		cout<<"\n Escolha Sua Opcao de candidato para o trono.";
		cout<<"\n | 1 | Para Joao das Neves ";
		cout<<"\n | 2 | Para Dona Aerys ";
		cout<<"\n | 3 | Nulo \n | 4 | Branco \n";

		cin>>resp;
		}while(resp<1 ||resp >4);
	
			switch (resp){
				case 1:cand1++;break;
				case 2:cand2++;break;
				case 3:nulo++;break;
				case 4:branco++;break;
			}

				
				cout<<"\n Deseja votar novamente ? ";
				cin>>resp2;
		
		
	}while(resp2=='s'&& resp2!='n'||resp2=='S'&&resp2!='N');
	
	cout<<"\n O resultado da votacao foi :";
	cout<<"\n Joao = "<<cand1<<"\n Dona = "<<cand2;
	cout<<"\n Branco = "<<branco<<"\n nulo = "<<nulo;
	

}



