#include <iostream>
#include <stdbool.h>

using namespace std;
#define TAM_VET 20
main(){
	
	int i, vet1[TAM_VET],x,posicao;
	bool esta;
	
 //mostrando para o usuario a qauntidade definida acima de numeros

	cout<<"\n Preciso que digite "<<TAM_VET<<" numeros aleatorios.";
	
		
	   //loop para captar os numeros
	
				   
		   for (i=0; i<TAM_VET ; i++){
		   
		//mostrando para o usuário as posições a partir do '1'
		   
		   cout<<"\n posicao "<<i+1<<" .";
		   
		   cin>>vet1[i];
		   
		   }
		   // numero a ser buscado em sistema
		   cout<<"\n Digite um numero que deseja procurar, estre estes que aqui estao.";
		   cin>>x;
		   
		   // buscando o numero igual.
		  for (i=0; i<TAM_VET ; i++){
		   		 
					
					if (x==vet1[i]){
  					esta=true;
  					posicao = i+1;
					
					}
					
		   }
		//mostrando o numero e a mensagem de validacao   
		   if (esta==true){
		   	cout<<"\n o numero esta na posicao "<<posicao<<" .";
		   }
		   else {
		   	cout<<"\n nao foi encontrado este numero.";
		   }
		   
		   
}

