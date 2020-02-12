#include <iostream>
#include <math.h>
using namespace std;
main(){
	int n;
	float raiz;
	double potencia_2 = 0;
	double potencia_3 = 0;
		cout<<"digite um numero inteiro";
		cin>>n;
			potencia_2 = pow(n,2);
			potencia_3 = pow(n,3);
			raiz=sqrt(n);
		cout<<"\n o numero ao quadrado = "<<potencia_2;
		cout<<"\n o numero ao cubo = "<<potencia_3;
		cout<<"\n o numero por sua raiz = "<<raiz;
	potencia_2 = pow(n,n);
	cout<<"\n o numero elevado a si mesmo = "<<potencia_2;
}
