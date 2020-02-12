#include <iostream>
using namespace std;
main(){
	int x;
	char r;//r = tipo de transacao | x é o numero do contador.
	float vlrv,vlrp,totv,totp,tot;
	totv=0;totp=0;
		for (x=1;x<16;x++){
			
			cout<<"\n transacao numero : "<<x<<" ";
			cout<<"\n esta transacao e a vista (V) ou a prazo (P).";
			cin>>r;
		
			if(r=='V' || r=='v'){
			cout<<"\n qual o valor da transacao.";
			cin>>vlrv;
			totv=totv+vlrv;
			}
				
			else if(r=='P'||r=='p'){
		
			cout<<"\n qual o valor desta transacao.";
			cin>>vlrp;
			totp=totp+vlrp;
			}
			
			else {
			cout<<"\n transacao invalida";
			}
		
		}
		tot=totp+totv;
	cout<<"\n____________________________________________";
	cout<<"\n| valor das compras a vista :"<<totv<<"   ";
	cout<<"\n|                                          ";
	cout<<"\n| valor das compras a prazo :"<<totp<<"   ";
	cout<<"\n|                                          ";
	cout<<"\n| valor das compras totais :"<<tot<<"     ";
	cout<<"\n|__________________________________________|";
}
