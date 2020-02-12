#include <iostream>
using namespace std;
#define p 0.45
#define b 4.0
#define perc 0.2
main (){
	float pao,broa,result,percent;
	cout <<" Quantos Paes foram vendidos? ";
	cin >> pao;
	cout <<" Quantas broas foram vendidas? ";	
	cin >> broa;
	result=(pao*p)+(broa*b);
	cout<<"\n o valor total arrecadado foi de = "<<result<<" reais ";
	percent=result*perc;
	cout<<"\n deve ser depositado na poupanca "<<percent<< " reais ";

}

