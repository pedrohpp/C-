#include <math.h>
#include <iostream>
using namespace std;
main(){
	
	float mips,mips2,clock,clock2,time_execution,x,cpi,time_execution2,cpi2;
 
 	int instruction,instruction2,r,option;
 	
	 x = 0;cpi = 0;
 	
	 // loop para rodar o sistema
 	
	 do {
		
		do{
		
		//opcoes iniciais do sistema.
		
		cout<<"\n Choose one of this options. \n ";
	 	cout<<"\n 1 - to calculate the MIPS of a machine. \n ";
 		cout<<"\n 2 - calculate and compare the MIPS of two machines. \n ";
 		cout<<"\n 3 - exit program. \n ";
		cin>>option;
		
		// confirmacao das opcoes 
		
		}while (option<=0 || option>3);
		// encerrar programa.
		
		if (option==3){
			
			cout<<" Tank you. :D "; break;
			
			exit(0);
		}
		// opcao para uma maquina apenas 
		
		else if (option==1){
		 	// obtendo informacao
		 	cout<<"\n So we will calculate from only one machine.\n";
		 	cout<<"\n How many instructions are running. \n ."; 
	 	 	cin>>instruction;
	 	 	cout<<"\n What is the machine clock rate in MHz. \n"; 
	 	 	cin>>clock;
		 	cout<<"\n What is the execution time in seconds.\n";
			cin>>time_execution;
		  	//calculo
		  	x = pow(10,6);
		 	//calculo mips
		 	instruction = instruction*x;
		 	time_execution = time_execution*x;
		 	
		 	mips = instruction/time_execution;
		 	
		 			 	
		 	cpi = clock/mips;
		 	//apresentando reultados
			 cout<<"\n For the definitions presented this machine hit. ";
			 cout<<"\n________________________________________";
			 cout<<"\n| Million instructions per second : "<<mips<<" ...|";
		 	 cout<<"\n|                                      			|";
			 cout<<"\n| Clocks Per Instruction: "<<cpi<<" ...			|";
			 cout<<"\n|______________________________________			|";
			 
			 //voltando ao menu principal
			 
		
	 		do{
			 
	 	    cout<<"\n 3 - back to main menu.";														 
 	 		cin>>option;
			 
			}while(option!=3);
		
		  }
		  else if (option==2){
		  	
		  		// obtendo informacao
		 	cout<<"\n So I'll calculate from two machines.\n";
		 	cout<<"\n How many instructions are running on the machine 1. \n .";
		 	cin>>instruction;
		 	 
		 	cout<<"\n How many instructions are running on the machine 2. \n .";
		 	cin>>instruction2;
		 	 
	 	 	cout<<"\n What is the machine 1 clock rate in MHz. \n";
	 	 	cin>>clock;
	 	 	 
	 	 	cout<<"\n What is the machine 2 clock rate in MHz. \n";
	 	 	cin>>clock2;
	 	 	 
	 	 	 
		 	cout<<"\n What is the execution time in seconds of machine 1.\n";
			cin>>time_execution;
		  	
			cout<<"\n What is the execution time in seconds of machine 2.\n";
			cin>>time_execution2;
			  
			  
			  //calculo
		  	x = pow(10,6);
		 	
			 //calculo mips
		 	
		 	instruction = instruction*x;
		 	
		 	time_execution = time_execution*x;
		 	
		 	mips = instruction/time_execution;
		 	
		 			 	
		 	cpi = clock/mips;
		 	
		 	//calculo mips maquina 2
		 	
		 	instruction2 = instruction2*x;
		 	
		 	time_execution2 = time_execution2*x;
		 	
		 	mips2 = instruction2/time_execution2;
		 	
		 			 	
		 	cpi2 = clock2/mips2;
		 	
		 	
			 //apresentando reultados
			 cout<<"\n For these definitions presented these machines reached. ";
			 cout<<"\n________________________________________";
			 cout<<"\n| Million instructions per second cpu 1: "<<mips<<" ...|";
		 	 cout<<"\n|                                      				|";
			 cout<<"\n| Clocks Per Instruction cpu 1: "<<cpi<<" ...|";
		  	 cout<<"\n|                                      				|";
			 cout<<"\n| Million instructions per second cpu 2: "<<mips2<<" ...|";
		 	 cout<<"\n|                                      				|";
			 cout<<"\n| Clocks Per Instruction cpu 2: "<<cpi2<<" ...|";
			 cout<<"\n|______________________________________				|";
		  	
		  	do{
			 
	 	     cout<<"\n 3 - back to main menu.";														 
 	 		 cin>>option;
			 
			 }while(option!=3);
		 	 }
		  
		 }while(option==3);
		 
		 return (0);
}
