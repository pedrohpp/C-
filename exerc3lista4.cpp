#include <iostream>
using namespace std;
#define TAM_MAT 10
main(){
	int mat[TAM_MAT][TAM_MAT],i,j,maior,linha,coluna;
	
	for (i=0; i<TAM_MAT ;i++){
		for (j=0; j<TAM_MAT ;j++){
			cout<<"\n Digite o numero da linha- "<<i<<" coluna- "<<j<<"\n";
			cin>>mat[i][j];
			if(i==0 && j==0){
			 maior=mat[0][0];
			}
			if (mat[i][j]>maior){
		 	 maior=mat[i][j];
		 	 linha=i;
		 	 coluna=j;
			}
		}
	}
	cout<<"\n maior numero e "<<maior<<" .";
	cout<<"\n esta na linha "<<linha<<" Coluna "<<coluna<<" .";
	
}
