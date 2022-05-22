/*1. Asignar valores a dos variables enteras, intercambie estos valores almacenados
usando solo punteros a enteros.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a;
	int b;
	cout<<"Ingrese el primer número: ";
	cin>>a;
	cout<<"Ingrese el segundo número: ";
	cin>>b;
	int *puntero1,*puntero2;
	puntero1=&a;
	puntero2=&b;
	int aux=*puntero1;
	*puntero1=*puntero2;
	*puntero2=aux;
	cout<<"Valor intercambiado del primer número: "<<a<<endl;
	cout<<"Valor intercambiado del segundo número: "<<b<<endl;
	return 0;
}

