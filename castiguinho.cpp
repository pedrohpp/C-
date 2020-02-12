#include <iostream>
using namespace std;
main(){
	char cat;
	do{
		cout<<"Digite a categoria |";
		cin>>cat;
	}while(cat!='F'&&cat!='f'&&cat!='M'&&cat!='m');
	
		if(cat=='F'||cat=='f'){
			cout<<"feminino";
			
		}else if(cat=='M'||cat=='m'){
			cout<<"masculino";
		}
	
}
