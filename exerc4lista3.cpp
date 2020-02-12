#include <iostream>
#include <math.h>
using namespace std;
int main(){

	char resp,option;
	int tot,idade,a,b,c,d,e,age,i;

	float porcent_e,percent_b,percent_c,diferenca;
	
	tot=0;
	a=0;
	b=0;
	c=0;
	d=0;
	e=0;
	age=0;

	
	//loop do sistema
	do {
		
		for (i=0; i<150 ; i++);
		
		cout<<"\n Ola, gostariamos de saber sua opiniao sobre esse filme.";
		cout<<"\n Primeiramente qual e a sua idade.";
		cin>>idade;
		
			
		
		   cout<<"\n Escolha uma das opcoes abaixo.  ";
		   cout<<"\n ______________";
		   cout<<"\n | A | OTIMO  | ";
		   cout<<"\n | B | BOM    | ";
		   cout<<"\n | C | Regular| ";
		   cout<<"\n | D | Ruim   | ";
		   cout<<"\n | E | Pessimo| ";
		   cout<<"\n |____________| ";
		   cin>>option;
		   
		
		
		//if para saber o numero de respostas
		if(option=='A'||option=='a'){
			a=a+1;
			
		}
		else if(option=='b'||option=='B'){
			 b=b+1;	
			
		}
		else if(option=='C'||option=='c'){
			c=c+1;
			
		}
		else if(option=='D'||option=='d'){
			d=d+1;
		age=age+idade;
			
		}else if(option=='E'||option=='e'){
			e=e+1;
		}
		else {
			cout<<"\n Resposta Errada!";
		}
		
		//resposta para rodar novamente 
		cout<<"\n Agradecemos a preferencia.";
		cout<<"\n Gostariamos que chamasse outro para responder tambem.";
		cout<<"\n Para avaliar digite 'S', para sair digite 'N' ";
		
		

		cin>>resp;

	}while(resp=='s'||resp=='S');
 	
 	
	 if(resp=='n'||resp=='N'){
	
            //total	
 			tot=a+b+c+d+e;
	  	
	 	//percentual bom e regular. 
		percent_b=b*tot/100;
		percent_c=c*tot/100;
		diferenca=percent_b-percent_c;

		//media idade 
		age=age/d;
		
		//porcentagem das respostas pessimo
		
		porcent_e=e*tot/100;		
		

		
		//apresentacao de resultados	 
	 	cout<<"\n Resultados da pesquisa.";
	 	cout<<"\n ________________________________________";
	 	cout<<"\n|numero de votos totais = "<<tot<<".";
	 	cout<<"\n|numero de votos Otimo = "<<a<<".";
	 	cout<<"\n|diferenca entre Bom e Regular = "<<diferenca<<"%.";
	 	cout<<"\n|media de idade respostas Ruim = "<<age<<".";
	 	cout<<"\n|porcentagem das respostas pessimo = "<<porcent_e<<"%.";
	 	cout<<"\n|_________________________________________";
		
	 }
	 
	 else {
	 	cout<<"\n Nao identificamos sua resposta.";
	 }
	
	
}
