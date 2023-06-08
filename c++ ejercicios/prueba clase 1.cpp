#include <iostream>
#include<cstdlib>
#include<cmath>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int i=0;
	double num;
	cout << "generamos numeros aleatorios" <<endl;
	for(i=0; i<5; i++){
		cout<<" "<<rand() %3;
	}
	cout <<endl;
	cout<<"ingrese un numero: " <<endl;
	cin>>num;
	
	cout << "la raiz cuadrada del numero es: " <<sqrt(num)<<endl;
	cout << "la potencia de ese numero al cubo es: " <<pow(num,3)<<endl;
	
	
return 0;	
}
