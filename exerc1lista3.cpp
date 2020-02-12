#include <iostream>
using namespace std;
main(){
	int x,idade,a,b,c,d,e,f;//x = numero de pessoas - a=crianca|b=adolescente|c jovem| d adulto|E= idoso.
	
	a=0;b=0;c=0;d=0;e=0;f=0;
	
	do	{

		for (x=1; x<16; x++ ){
		

		cout<<"\n candidato numero - "<<x<<" Quantos anos voce tem. ";
		cin>>idade;
			
			if (idade>=0 && idade<=11){
				a=a+1;
			
			}else if (idade>=12 && idade <=17){
				b=b+1;
			
			}else if (idade>=18 && idade <=25){
				c=c+1;
			
			}else if (idade>=26 && idade<=64){
				d=d+1;
			
			}else if (idade>=65 && idade<=150){
				e=e+1;
			
			}else if (idade<0 && idade>150){
				cout<<"idade invalida";
			}
		}
	} while (x<15);
	f=a+b;
	cout<<"\n_____________________________________________";
	cout<<"\n|                                           |";
	cout<<"\n|	faixa etaria : Crianca = "<<a<<"         |";
	cout<<"\n|	faixa etaria : Adolescente = "<<b<<"     |";
	cout<<"\n|	faixa etaria : Jovem = "<<c<<"            |";
	cout<<"\n|	faixa etaria : Adulto = "<<d<<"           |";
	cout<<"\n|	faixa etaria : Idoso = "<<e<<"            |";
	cout<<"\n|	menores de idade = "<<f<<"               |";
	cout<<"\n--------------------------------------------|";
}



