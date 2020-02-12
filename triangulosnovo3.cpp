#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
main(){
	float A,B,C;
		cout<<" insira o primeiro valor ";
		cin>>A;
		cout<<" insira o segundo valor ";
		cin>>B;
		cout<<" insira o terceiro valor ";
		cin>>C;
			if(A<=B+C && B<=A+C && C<=B+A ){
			
				if(A==B && B==C){
				cout<<" E possivel formar um triangulo equilatero ";
			}
				else if(A==B && B!=C){
				cout<<" E possivel formar um triangulo isoceles ";
				
			}
				else if(A!=B && B!=C){
				cout<<" E possivel formar um triangulo escaleno ";
			}
				else{
				cout<<" Nao e possivel formar nenhum dos 3 tipos de triangulos ";
			}
			
	
	}
	else{
		cout<<" impossivel formar um triangulo ";
	}
}

