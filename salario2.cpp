#include <iostream>
#include <math.h>
#include <cstring>
#define ALUGUEL 310.0
#define PASSE 60.0
#define CREDITO 30.0
using namespace std;
main(){
	float salario,vale;
	char obj[20],resp;
	char lista[obj];
	
	cout<<"\n Digite o seu salario deste mes.";
	cin>>salario;
	cout<<"\n Digite o vale deste mes.";
	cin>>vale;
		salario=salario+vale;
		salario=salario-(ALUGUEL+PASSE+CREDITO);
													 
	cout<<"\n que objetivo você possui este mes.";
		cin.getline(obj,20);
		
		cout<<"\n Voce possui mais outro objetivo para este mes. (S/N)";
		cin<<resp;
			if (resp=='s'||resp=='S'){
				cout<<"\n proximo objetivo";
		cin.getline(obj,20);
		}	
	
}
