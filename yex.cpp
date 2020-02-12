#include <iostream>
using namespace std;

main(){
	float a,b,c,d,e,f,x,y,vc,vf;
	cout<<" digite a variavel A ";
	cin>>a;
	cout<<" digite a variavel b ";
	cin>>b;
	cout<<" digite a variavel c ";
	cin>>c;
	cout<<" digite a variavel d ";
	cin>>d;
	cout<<" digite a variavel e ";
	cin>>e;
	cout<<" digite a variavel f ";
	cin>>f;
	x=((c*e)-(b*f))/((a*e)-(b*d));
	y=((a*f)-(c*d))/((a*e)-(b*d));
	
	cout<<"\n o valor de x = "<<x;
	cout<<"\n o valor de Y = "<<y;
	
	vc=(a*x)+(b*y);
	vf=(d*x)+(e*y);
	
	cout<<"\n o valor de c= "<<vc;
	cout<<"\n o valor de f= "<<vf;
	
}
