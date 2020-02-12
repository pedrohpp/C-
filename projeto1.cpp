#include <iostream>
using namespace std;
main(){
	int x,salario,vale,ncontafix[x],contador;
	char resp,nacontafix[x][10];
	
	
	//nesta parte ele pergunta os valores para calcular
	cout<<"\n Qual o valor do seu salario este mes.";
		cin>>salario;
	cout<<"\n Qual o valor do seu vale este mes.";
		cin>>vale;
	 	salario=salario+vale;
	
	//aqui ele vai perguntar sobre contas fixas e fazer o if
	cout<<"\n Voce possui alguma conta fixa este mes.(s/n)";
		cin>>resp;
	
	if (resp=='s'||resp=='S'){//if que inicia o primeiro array
				cout<<"\n Quantas contas fixas voce possui.(max 5)";
					cin>>x;
					fflush(stdin);
					//laco de repetição para fazer perguntar ate acabar.
				
				for (contador=0;contador<x;contador++){
				//for para repetir o cout
				fflush(stdin);
				cout<<"\n Qual o nome da conta numero "<<contador<<" .(10 letras)";
				cin.getline(nacontafix[contador],10);
				//aqui ele vai pegar os valores
							
				cout<<"\n Qual  o valor da conta numero "<<contador<<" .";
				cin>>ncontafix[x];
				}
				
				cout<<"\n valores :";//apresentar valores na tela
				
				for (contador=0;contador<x;contador++){
				cout<<"\n conta "<<nacontafix[contador]<<" valor= "<<ncontafix[contador];	
				}
			}else 
		{
		cout<<"cabo";
		}
	
	
}
