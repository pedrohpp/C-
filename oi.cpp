#include <iostream>
using namespace std;
int main(){
			int n;
			char r,r2;
			
	cout<<"\n oi mundo. ";
	cout<<"\n gostaria de introduzir a voce o mundo magico dos codigos. ";
	cout<<"\n deseja vir comigo(s|n) .";
	cin>>r;
	
		
	do {
	
		if (r=='s'||r=='S'){
		 
		
		
			cout<<"\n digite um numero de 0 a 5 ";
			cin>>n;
		
			switch(n){
				case 0:cout<<"\n Este numero, e o mais gordo de todos.\n";break;
				case 1:cout<<"\n O numero escolhido e o primeiro numero impar .\n"; break;
				case 2:cout<<"\n Este numero, e um numero que so se divide por 1 e por ele mesmo.\n";break;
				case 3:cout<<"\n Este numero quando multiplicado por 3 e igual a 9 .\n"; break;
				case 4:cout<<"\n Este, Parece um V de cabeca para baixo e com uma perna cruzada.\n";break;
				case 5:cout<<"\n Parece-me que se voce divir o numero 10, chegara neste .\n";break;
			}
		}else {
			cout<<"\n E uma pena que nao queira, mas volte sempre.";	
		}
		cout<<"\n Quer tentar mais uma vez .";
		cin>>r2;
		
		if (r2=='s'||r2=='S'){
			cout<<"\n  Okay entao. \n";
		}else if (r2=='n'||r2=='N'){
			cout<<"\n Que pena, mas obrigado por participar.";	
		}else{
			cout<<"\n  voce digitou errado. \n";
		}
		
		
		
	}while(r2=='S'||r2=='s');
		
}


