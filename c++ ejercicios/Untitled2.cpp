#include <iostream>

 using namespace std;
 int main() {
 	
 cout << "Bienvedido este programa permite hallar la edad promedio de sus empleados" <<endl << "cuantos usuarios desea valorar?: ";
 
 int num,i, edad,prom,edadm;
 string nombre;
 cin >> num;
 cout << "+++++++++++++++++" <<endl <<"total usuarios a valorar?: " <<num <<endl;
 for (int i =0; i < num; i++){			
 	
	cout << "ingrese el nombre " <<i+1<<": " <<endl;
	cin >> nombre;
	cout<< 	endl;
	cout << "ingrese la edad " <<i+1<<": " <<endl;
	cin >> edad;
	cout<< 	endl;
	
	edadm+=edad;
 }
prom=edadm/num;
cout<<"la edad promedio de sus empleados es: " <<prom;

 
 return 0;
 }
