#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
main (){
		float nota1,nota2,media,tra;
		char nome[30];
	
		cout<<"\n Digite o nome do aluno.";
		cin>>nome;
		fflush(stdin);
		cout<<"\n Digite a nota da primeira avaliacao.";
		cin>>nota1;
		
		cout<<"\n Digite a media da segunda avaliacao.";
		cin>>nota2;
		
		cout<<"\n Digite a media do trabalho.";
		cin>>tra;
		
		
		
		
			media=((nota1+nota2)/2*0.7)+(tra*0.3);
		if (media>6.0){
			cout<<"\n A media final do aluno(a) "<<nome<<" e ,= "<<media<<"resultado: aprovado.";
		}
		else if (media<6.0){
		cout<<"\n A media final do aluno(a) "<<nome<<" e ,= "<<media<<" estude mais";
		}
		
		
	
}
