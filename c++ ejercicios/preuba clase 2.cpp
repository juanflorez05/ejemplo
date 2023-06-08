#include <iostream>

 using namespace std;
 int main() {
 	
 cout << "Bienvedido este programa permite hallar la calificacion promedio de sus estudiantes" <<endl << "cuantos estudiates desea valorar?: ";
 
 float num,i, cali,prom,calim;
 string nombre;
 cin >> num;
 cout << "+++++++++++++++++" <<endl <<"total estudiantes a valorar?: " <<num <<endl;
 for (int i =0; i < num; i++){			
 	
	cout << "ingrese el nombre " <<i+1<<": " <<endl;
	cin >> nombre;
	cout<< 	endl;
	cout << "ingrese la edad " <<i+1<<": " <<endl;
	cin >> cali;
	cout<< 	endl;
	
	calim+=cali;
 }
prom=calim/num;
cout<<"la clasificacion promedio de sus estudiantes es: " <<prom;

 
 return 0;
 }
