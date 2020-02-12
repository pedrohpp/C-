#include <iostream>
using namespace std;

main(){
	int n;
	cout<<"digite um numero inteiro \n";
	cin>>n;
	 	if (n % 2 == 0){
        	cout<<"\n O numero "<<n<<" e par ";
    	}else if(n % 2 == 1) {
        	cout<<"\n O numero "<<n<<" e impar ";
    	}
    	else {
    		cout<<"numero invalido";
		}
}
