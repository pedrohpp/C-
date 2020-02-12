#include <iostream>
#include <math.h>
#include <cstring>
#define ALUGUEL 310.0
#define PASSE 60.0
#define CREDITO 30.0
using namespace std;
main(){
	
	char name[20];
	char sport[20];
	
	cin.getline(name, 20);
	cin.getline(sport, 20);
	
	cout<<name<<" loves " << sport<<endl;
	cin.get();
	return 0;
}
