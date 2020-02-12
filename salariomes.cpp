#include <iostream>

#include <math.h>
#define ALUG 310.0  
#define PASS 60.0
#define CRED 30.0
using namespace std;
main(){
	float salario,resto,vale,obj1,obj2,obj3,obj4,obj5,pessoal;
	cout<<"\n Digite seu salario desse mes. ";
	cin>>salario;
	cout<<"\n Digite o valor do vale deste mes. ";
	cin>>vale;
	 /* 
	 objetivos: cartade motorista obj1 20%|
	  mi band 3 10% obj2 |jardim obj3 10%|prateleiras 20% obj4|
	  arranhador obj5 20%|
	 */
	 cout<<"\n Gastos do mes| \n -"<<ALUG<<" |aluguel em reais";
	 cout<<"\n -"<<PASS<<" |passe em reais";
	 cout<<"\n -"<<CRED<<" |credito cel em reais";
		resto=(salario+vale)-(ALUG+PASS+CRED); //calculo do resto do salario
		obj1=resto*0.2;
		obj2=resto*0.1;
		obj3=resto*0.1;
		obj4=resto*0.2;
		obj5=resto*0.2;
		pessoal=resto*0.2;
	cout<<"\n Calculamos seus gastos mensais...\n";
	cout<<"\n| Carta motorista |"<<obj1<<"\n| Mi Band |"<<obj2<<"\n| Jardim |"<<obj3;
	cout<<"\n| Prateleiras Para Gato |"<<obj4<<"\n| Arranhador |"<<obj5<<"\n| Pessoal |"<<pessoal;
		
}
