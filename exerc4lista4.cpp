#include <iostream>
using namespace std;
#define TAM_MAT 3
#include <stdbool.h>
main(){
	int i,mat[TAM_MAT][TAM_MAT],j,n,posicaoi,posicaoj;	
	bool esta;


	//escrevendo os numeros na matriz
	for (i=0; i<TAM_MAT ;i++){
		for (j=0; j<TAM_MAT ;j++){
			cout<<"\n Digite o numero da linha- "<<i<<" coluna- "<<j<<"\n";
			cin>>mat[i][j];
		}
	}


	//numero a ser buscado
	cout<<"\n Digite um numero a ser buscado ";
	cin>>n;


	//encontrando o numero
	for (i=0; i<TAM_MAT ;i++){
		for (j=0; j<TAM_MAT ;j++){
			
			if (n==mat[i][j]){
			esta=true;
			posicaoi=i;
			posicaoj=j;
			}
		}
	}


	//mostrando a localizacao do numero
	if(esta==true){
		cout<<"\n o Numero buscado esta na linha "<<posicaoi<<" coluna "<<posicaoj<<" .";
	}


	//mostrando a mensagem caso o numero nao esteja entre os demais
	else{
		cout<<"\n numero nao encontrado";
	}

}

