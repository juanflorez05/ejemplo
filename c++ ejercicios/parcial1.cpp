#include <iostream>
#include <cstdlib>
//	cout<<" "<<rand() %100;
#include <time.h>
using namespace std; 

int conversorM(int con){
	int mila;
	mila=con/1000;
	cout<<"Su valor en millas es: "<<mila<<endl;
	
}

int conversorL(int l){
	int kg;
	kg=l/2;
	//cout<<"Su valor en kilogramos es: "<<kg<<endl;
	return kg;
}

int juego(int jugar){
	
		srand(time(NULL));
		int valorR, valorR2, valorR3, v;

		valorR = rand() %3;
		v= valorR;
		cout<<" el numero random es:  "<<valorR<<endl;
		if(jugar=1){

		switch (v){
			
			case 0:
			cout<<"La maquina selecciono piedra, fue empate"<<endl; 
			break; 
			case 1:
			cout<<"La maquina selecciono papel, usted perdio"<<endl; 
			break; 
			case 2:
			cout<<"La maquina selecciono tijera, usted gano"<<endl; 
			break; 
			
		}
		
		
		}
		
		if(jugar=2){

		switch (v){
			
			case 0:
			cout<<"La maquina selecciono piedra, usted gano"<<endl; 
			break; 
			case 1:
			cout<<"La maquina selecciono papel, usted empato"<<endl; 
			break; 
			case 2:
			cout<<"La maquina selecciono tijera, usted perdio"<<endl; 
			break; 
			
		}
		
		
		}
	
		if(jugar=3){

		switch (v){
			
			case 0:
			cout<<"La maquina selecciono piedra, usted perdio"<<endl; 
			break; 
			case 1:
			cout<<"La maquina selecciono papel, usted gano"<<endl; 
			break; 
			case 2:
			cout<<"La maquina selecciono tijera, usted empato"<<endl; 
			break; 
			
		}
		
		
		}
}


//double calc(double p, double i, double an){
	
//	double 
	
//}

int main(){

int opcion;


do{

cout<<"************************************"<<endl;
cout<<"Bienvenido al menu ingrese:"<<endl;
	cout<<"0. Para Salir"<<endl;
	cout<<"1. para conversor de unidades"<<endl;
	cout<<"2. para zzz"<<endl;
	cout<<"3. para jugar piedra, papel o tijera"<<endl;
	cout<<"4. para generar secuencias numericas"<<endl;
cin>>opcion;	

switch(opcion){
	case 1:
		
	int num1,kilo,mila,libra,kg;
	int KiloG;
	
	do{
	
	cout<<"************************************"<<endl;
	cout<<"Menu para convertir unidades"<<endl;
	cout<<"0. Para Salir"<<endl;
	cout<<"1. Para convertir de kilometros a millas"<<endl;
	cout<<"2. Para convertir de libras a kilogramos"<<endl;
	
	cin>>num1;
	
		switch(num1){
			
			case 1:
			
			cout<<"Ingrese el valor a convertir de kilometros a millas"<<endl;
			cin>>kilo;
			//mila=kilo/1000;
			
			//cout<<"Su valor en millas es: "<<mila<<endl;
			conversorM(kilo);
			break;
			
			case 2:
				
			cout<<"Ingrese el valor a convertir de libras a kilogramos"<<endl;
			cin>>libra;
			//kg=libra/2;
			KiloG = conversorL(libra);
			cout<<"Su valor en kilogramos es: "<<KiloG<<endl;
			 
			break;
			
		}		
	}while(num1!=0);
	
	
	break;
	//aqui va el case 2
	case 3:
		int jugar;
		
		do{
			
			cout<<"************************************"<<endl;
			cout<<"Bienvenido al juego de Piedra, papel o tijera"<<endl;
				cout<<"0. Para Salir"<<endl;
				cout<<"1. para elegir piedra"<<endl;
				cout<<"2. para elegir papel"<<endl;
				cout<<"3. para elegir tijera"<<endl;
				cin>>jugar;
				
				juego(jugar);
				
				
				
		}while(jugar!=0);
		
	 break;
	 
	 case 4:
	
		double pres, inte, anios;
		 	
	 	cout<<"Bienvenido a la calculadora de prestamo"<<endl;
	 	cout<<"Ingrese el monto del prestamo"<<endl;
	 	cin>>pres;
	 	cout<<"Ingrese la tasa de interes"<<endl;
	 	cin>>inte;
		cout<<"Ingrese el plazo en años"<<endl;
	 	cin>>anios;
	 	//calc(pres, inte, anios);
	 	
	 	
	 break;
	 
	 case 5:
	 
	 
	  
	 break;
}
	
}while(opcion!=0);

	
return 0;	
}
