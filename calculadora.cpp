
#include <iostream>
#include <math.h>
using namespace std;
main(){
	int n1,n2;
	float result;
	char op;
		cout<<"\n digite o primeiro numero \n";
		cin>>n1;
		cout<<"\n digite a operacao \n";
		cin>>op;
		cout<<"\n digite o segundo numero \n";
		cin>>n2;
		
			switch (op){
				case '+': result=n1+n2; break;
				case '-': result=n1-n2; break;
				case '*': result=n1*n2; break;
				case '/': result=n1/n2; break;
			}
	cout<<"\n resultado = "<<result;
}
