#include <iostream>
#include <stdio.h>
using namespace std;
main(){
	float nota;
	cout<<" informe a nota do aluno (de 0 a 10) ";
	cin>>nota;
	if(nota==0.0 || nota<=2.9){
		cout<<" conceito deste aluno e E ";
	}
	else if(nota==3.0 || nota<=4.9){
		cout<<" conceito deste aluno e D ";
	}
	else if(nota==5.0 || nota<=6.9){
		cout<<" conceito deste aluno e C ";
	}
	else if(nota==7.0 || nota<=8.9){
		cout<<" conceito deste aluno e B ";
	}
	else if(nota>=9.0 || nota==10.0){
		cout<<" conceito deste aluno e A ";
	}
	else{
		cout<<" nota invalida ";
	}
	
}
