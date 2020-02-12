#include <iostream>
using namespace std;
#define dist 0.28
#define imp 0.45
main (){
	float custfab,impfab,impdist,vlrcli;
	cout<<"\r insira o valor de fabrica ";
	cin>>custfab;
	
	impfab=custfab*imp;
	cout<<"o valor do imposto e "<<impfab<<" reais\n";
	
	impdist=custfab*dist;
	cout<<"o valor para o distribuidor e "<<impdist<<" reais\n";
	
	vlrcli=custfab+impfab+impdist;
	cout<<"o valor final para o cliente e de "<<vlrcli<<"reais"; 

}

