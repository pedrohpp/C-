#include <iostream>
using namespace std;
#define TAM_VET 10
main(){
	int i,vet1[TAM_VET], n,esq,dir,pdir,pesq;
	
	
	cout<<"\n Digite 10 numeros ";
	for(i=0; i<TAM_VET ;i++){

	//loop para armazenar 10 numeros	
	cout<<"\n Posicao "<<i<<" .";
	cin>>vet1[i];
	
	}
	
	//pedir o numero para imprimir seus vizinhos
	cout<<"\n digite um numero";
	cout<<"\n com base nele iremos imprimir os seus vizinhos ";
	cin>>n;
	
	//ler os numeros
	for (i=0; i<TAM_VET ; i++){
		//gravando em variaveis as informacoes
		if (n==vet1[i]){
		dir=i+1;
		esq=i-1;
		pdir=vet1[i+1];
		pesq=vet1[i-1];
		}
		
	}
	//definindo possiveis erros e mostrando as posicoes
	if (esq==-1){
		cout<<"\n nao possui numero a esquerda";
		cout<<"\n a direita temos "<<pdir<<" .";
	}else if (dir==10){
		cout<<"\n nao possui numero a direita";
		cout<<"\n a esquerda temos "<<pesq<<" .";
	}else {
		cout<<"\n a direita temos "<<pdir<<" .";
		cout<<"\n a esquerda temos "<<pesq<<" .";
	}
}
