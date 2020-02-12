#include <iostream>
using namespace std;
main(){
	

	int vetor[7]={10,20,30,40,50,60,70};
	int i;
	
	
	for(i=0; i<sizeof(vetor)/4; i++){
	cout<<vetor[i]<<"\n";	
	}
	
	
	
	return 0;
}

