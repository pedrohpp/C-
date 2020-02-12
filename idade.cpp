#include <iostream>
using namespace std;
main(){
	int age;
	
		cout<<"\n Digite a sua idade.";
		cin>>age;
			if (age <0 || age >150){
				cout<<"\n idade invalida.";
			}
				else if (age>=0&&age<=10){
					cout<<"\n voce e uma crianca";		
			}		
			
				else if (age>= 11&&age<=17){
					cout<<"\n voce e um adolescente.";
			}
				else if (age>= 18 && age<= 20){
					cout<<"\n voce e um jovem.";
			}
				else if (age>= 21 && age<= 60){
					cout<<"\n voce e um adulto.";
			}
				else if (age>60 || age<150){
					cout<<"\n voce esta na melhor idade.";
			}
	
}
