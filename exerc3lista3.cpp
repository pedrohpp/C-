#include <iostream>
using namespace std;
main(){
	int idade,a,b,c,i,p,x;
	float peso,altura,media;
	char cor_olho,cor_cabelo;
	
	a=0;i=0;p=0;b=0;c=0;media=0;
	
	do{
	
	for(x=1;x<21;x++){
		
	cout<<"\n Estamos fazendo uma pesquisa e gostariamos de saber algumas informacoes ";
	cout<<"\n 1- qual e a sua idade ";
		cin>>idade;
	cout<<"\n 2- qual e o seu peso ";
		cin>>peso;
	cout<<"\n 3- qual e a sua altura ";
		cin>>altura;
	
	do{
	cout<<"\n 4- cor dos olhos sendo:";
	cout<<"\n |A- azul  |P- preto |V- verde |C- castanho| ";
		cin>>cor_olho;
	
	} while(cor_olho!='a'&&cor_olho!='A'&&cor_olho!='p'&&cor_olho!='P'&&cor_olho!='v'&&cor_olho!='V'&&cor_olho!='c'&&cor_olho!='C');
	
	
	do{
	
	cout<<"\n 5- cor do cabelo sendo: ";
	cout<<"\n |P- preto |C- castanho |L- loiro |R- ruivo|";
		cin>>cor_cabelo;
	
	}while(cor_cabelo!='p'&&cor_cabelo!='P'&&cor_cabelo!='c'&&cor_cabelo!='C'&&cor_cabelo!='l'&&cor_cabelo!='L'&&cor_cabelo!='r'&&cor_cabelo!='R');
	
	
	cout<<"\n Muito obrigado pela Colaboracao, aguarde as proximas pessoas";
	cout<<"\n respoderem para saber o resultado da pesquisa.\n";
	
			if(cor_olho=='a'||cor_olho=='A'&& altura>=1.70){
			a=a+1;	
			}
			else if (peso>100.0){
				p=p+1;
				i=i+idade;
			}
			else if (cor_olho=='a'||cor_olho=='A'){
				b=b+1;
			}
			else if (cor_cabelo=='r'||cor_cabelo=='R'&&cor_olho!='a'||cor_olho!='A'){
				c=c+1;
			}
		}
	}while(x<3);
	media=i/p;
	
	cout<<"\n_____________________________________________";
	cout<<"\n| 		Resultados da pesquisa				";
	cout<<"\n| Quantidade de pessoas de olhos claros		";
	cout<<"\n| acima de 1.70 m = "<<a<<" 				   ";
	cout<<"\n| Media da idade de pessoas 					";
	cout<<"\n| acima de 100 kg = "<<media<<"			   ";	
	cout<<"\n| Quantidade de pessoas que possuem			";
	cout<<"\n| olhos azuis dentre as outras = "<<b<<"	   ";
	cout<<"\n| Quantidade de pessoas ruivas que		   ";
	cout<<"\n| nao possuem olhos azuis = "<<c<<"			   ";
	cout<<"\n| Quantidade de pessoas que  ";
	cout<<"\n| participaram da pesquisa = "<<x-1<<"		   ";
}
