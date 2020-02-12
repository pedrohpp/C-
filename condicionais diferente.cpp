#include<stdio.h>
#include<stdlib.h>


//funcao principal do programa
main(){

//definindo variaveis
int a = 5; int b = 10; int c = 15; char d = 'x';


//maior
if ( a > 2){
	printf("\n %d e maior que 2 \n", a);
}
// maior ou igual
if (c >= b ){
	printf("\n  %d eh maior ou igual a %d \n",c, b);
	
}

//menor
if (a <= 10 ){
	printf("\n  %d eh menor ou igual a 10 \n",a );
	
}

//diferente 

if (c != 10 ){
	printf("\n  %d nao eh 10 \n",c );
	
}

if (d != 'a' ){
	printf("\n  %c nao eh igual a  'A' \n",d );
	
}


//pausa o programa apos a execução
		system("pause");
}

