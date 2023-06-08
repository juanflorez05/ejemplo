#include<iostream>

using namespace std;

int main()
{
	int tarifa_base=0, edad=0, op_compania=0, estudiante=0, total_pasaje=0;
	string Nombre="", Temporada= "";
	cout<<"**********************************"<<endl;
	cout<<"Bienvenidos a ELEVADOS"<<endl;
	cout<<"*****************************"<<endl;
	cout<<"por favor digite su nombre: ";
	cin>>Nombre;
	cout<<endl;
	cout<<"por favor digite su edad: ";
	cin>>edad;
	cout<<endl;
	cout<<"¿Es Estudiante?: ";
	cout<<"1. SI"<<endl;
	cout<<"2. NO"<<endl;
	cin>>estudiante;
	cout<<endl;
	cout<<"Escoja la compañia porla cual desea viajar: ";
	cout<<"1. ALAS"<<endl;
	cout<<"2. VOLAR"<<endl;
	cin>>op_compania;
	cout<<"*********************************"<<endl;
	cout<<"Escriba la Temporada (ALTA-BAJA): "<<endl;
	cin>>Temporada;
	cout<<endl;
	cout<<"Digite la Tarifa base: ";
	cin>>tarifa_base;
	
	
	if(op_compania==1)
	{
		if(Temporada=="ALTA")
		{
			total_pasaje=((tarifa_base*30)/100)+tarifa_base;	
		}else
		{
			total_pasaje=tarifa_base;
			if(edad>=18&&estudiante==1)
			{
				total_pasaje=total_pasaje-((total_pasaje*10)/100);
			}
		}	
	}
	if(op_compani==2)
	{
		if(Temporada=="ALTA")
		{
			total_pasaje=((tarifa_base*20)/100)+tarifa_base;	
		}
		else
		{
			
		}
	}
	if (edad<18)
		{
			total_pasaje=(total_pasaje*50)/100;
		}
	cout<<"+-------------------------------------------+"	
return 0;	
}

