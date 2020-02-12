#include <iostream>
using namespace std;
main(){
	float vlrproduct,tot;
	char location;
		cout<<"\n Qual o valor total do produto a ser importado (em Reais). ";
		cin>>vlrproduct;
		cout<<"\n Escolha para qual pais quer efetuar o envio.";
		cout<<"\n |EUA|=1|FRANCA|=2|MEXICO|=3|ARGENTINA|=4|CHINA|=5.";
		cin>>location;
		switch (location){
			case '1':tot=vlrproduct+60.00;break;
			case '2':tot=vlrproduct+75.50;break;
			case '3':tot=vlrproduct+50.00;break;
			case '4':tot=vlrproduct+27.35;break;
			case '5':tot=vlrproduct+0.00;break;
		}
		cout<<"\n O valor total do Produto + Frete e = "<<tot<<" -Reais.";
		
}


