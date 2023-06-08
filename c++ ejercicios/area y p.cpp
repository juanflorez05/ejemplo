#include<iostream>
#include<cmath>
using namespace std;

int area(double, int){
}
int perimero(double, int){
}
int main() {
	
	cout <<"bienvenido este programa te ayudara a calcular el area y el perimetro de un circulo" <<endl;
	cout <<"ingrese el radio del circulo: " ;
	
	cout <<"*****************" <<endl <<"ingrese el diametro del circulo: " ;
	
	int a;
	a=area(pi,r);
	int p;
	p=perimetro(pi,d);
	
	cout <<"*****************" <<endl <<"el area es: " <<a <<endl ;
	
	cout <<"*****************" <<endl <<"el perimetro es: " <<p ;
	
return 0;

int area(double pi=3.1416, double r){
	cin >> r;
	return pi*pow(r,2);
}

int perimero(double pii, int d){
	cin >> d;
	return pi*d;
}
