#include <iostream>
using namespace std;
main(){
	float var1,var2,aux;
	char rsp;
	cout<<"digite a primeira variavel ";
	cin>>var1;
	cout<<"digite a segunda variavel ";
	cin>>var2;
	
		cout<<var1<<" e a primeira e "<<var2<<"  segunda \n";
			cout<<"podemos fazer a troca s/n ?";
			cin>>rsp;
				if(rsp == 's'){
				aux=var1;
				var1=var2;
				var2=aux;
				cout<<" a primeira agora e "<<var1<<" e a segunda e "<<var2;	
		}
		else{
			cout<<"fim.";
		} 
	 
}

