#include <iostream>
using namespace std;
main(){
	int idade,vlr;
	char sex;
		cout<<"\n Digite sua idade ";
		cin>>idade;
		cout<<"\n Digite seu sexo  (m/f)";
		cin>>sex;
			switch (sex){
				case'm':
					if (idade>=30){
						vlr=100;
						cout<<"\r O senhor tem o abono no valor de - "<<vlr<<" reais";
					}
					else if (idade<30){
						vlr=50;
						cout<<"\r O senhor tem um abono no valor de - "<<vlr<<" reais";
					}
					else
					cout<<"\r erro: idade indefinida.";
				break;
				case'f':
					if (idade>=30){
						vlr=200;
						cout<<"\r A senhora tera um abono no valor de - "<<vlr<<" reais";
					}
					else if(idade<30){
						vlr=80;
						cout<<"\r A senhora tera um abono no valor de - "<<vlr<<"reais";
					}
					else
					cout<<"\r erro: idade indefinida. ";
				break;
			}	
}
