#include <iostream>
using namespace std;
main(){
	int n1,n2,n3;
	char ordem;
		cout<<"\n Digite um numero aleatorio - ";
		cin>>n1;
		cout<<"\n Digite um segundo numero - ";
		cin>>n2;
		cout<<"\n Digite o ultimo numero - ";
		cin>>n3;
		cout<<"\n Digite a ordem apresentada (c)Crescente (d)Decrescente - ";
		cin>>ordem;
			if (ordem=='d'){
				if (n1>=n2&&n2>=n3){
					cout<<"1 - "<<n1<<" 2 - "<<n2<<" 3 - "<<n3;
					
				}
				else if (n1>=n3&&n3>=n2){
					cout<<"1 - "<<n1<<" 2 - "<<n3<<" 3 - "<<n2;
				}
				
				else if (n3>=n1&&n1>=n2){
					cout<<"1 - "<<n3<<" 2 - "<<n1<<" 3 - "<<n2;
				}
				
				else if (n3>=n2&&n2>=n1){
					cout<<"1 - "<<n3<<" 2 - "<<n2<<" 3 - "<<n1;
				}
				
				else if (n2>=n1&&n1>=n3){
					cout<<"1 - "<<n2<<" 2 - "<<n1<<" 3 - "<<n3;
				}
				
				else if (n2>=n3&&n3>=n1){
					cout<<"1 - "<<n2<<" 2 - "<<n3<<" 3 - "<<n1;
				}	
			}
			else if (ordem=='c'){
				if (n1>=n2&&n2>=n3){
					cout<<"1 - "<<n3<<" 2 - "<<n2<<" 3 - "<<n1;
					
				}
				else if (n1>=n3&&n3>=n2){
					cout<<"1 - "<<n2<<" 2 - "<<n3<<" 3 - "<<n1;
				}
				
				else if (n3>=n1&&n1>=n2){
					cout<<"1 - "<<n2<<" 2 - "<<n1<<" 3 - "<<n3;
				}
				
				else if (n3>=n2&&n2>=n1){
					cout<<"1 - "<<n1<<" 2 - "<<n2<<" 3 - "<<n3;
				}
				
				else if (n2>=n1&&n1>=n3){
					cout<<"1 - "<<n3<<" 2 - "<<n1<<" 3 - "<<n2;
				}
				
				else if (n2>=n3&&n3>=n1){
				
					cout<<"1 - "<<n1<<" 2 - "<<n3<<" 3 - "<<n2;
				}
			}
			else { 
			cout<<"\n erro : não identificamos a sua operacao.";
		}
}
