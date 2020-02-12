#include <iostream>
#include <math.h>
using namespace std;
main(){
	int age;
	float peso,altura,imc;
	cout<<"\n ola irei calcular seu IMC, digite sua idade.";
		cin>>age;
	cout<<"\n muito bem, agora digite seu peso.";
		cin>>peso;
	cout<<"\n para concluir preciso apenas da sua altura.";
		cin>>altura;
		
	if (age<=12||age>=65){
		cout<<"\n Desculpe mas voce nao podera participar do experimento";
	}
	else if (age>12&&age<65){
		imc=peso/(altura*altura);
			if (imc<18.5){
				cout<<"\n voce esta em um caso de magreza, recomendamos comer mais, de forma saudavel.";
				}
				else if (imc>18.5&&imc<25.0){
					cout<<"\n Parabens Voce esta saudavel.";
				}
				else if (imc>25.0&&imc<30.0){
					cout<<"\n cuidado voce esta acima do peso.";
				}
				else if (imc>30.0&&imc<35.0){
					cout<<"\n recomendamos consultar um medico, voce pode estar com obesidade I";
				}
				else if (imc>35.0&&imc<40.0){
					cout<<"\n seu caso e severo voce esta com obesidade II";
				}
				else if (imc>40.0||imc==100)
					cout<<"\n recomendamos uma bariatrica, voce esta no grau de obesidade III";
			else {
				cout<<"\r perdao, nao identificamos seu peso";
			}
					
		}
}
