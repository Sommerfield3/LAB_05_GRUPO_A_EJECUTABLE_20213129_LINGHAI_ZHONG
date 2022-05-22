/*6. Utilizando punteros a funciones, implemente las funciones:
a. void sumar (int a, int b);
b. void restar (int a, int b);
c. void multiplicar (int a, int b);
d. void dividir (int a, int b);
Cree un vector de punteros a funciones e implemente un programa que permita la
invocaci�n de cada funci�n, pero a trav�s del puntero.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
void sumar(int a,int b){
	int suma;
	suma=a+b;
	cout<<"La suma de los n�meros ingresados es: "<<suma<<endl;
}
void restar(int a,int b){
	int resta;
	resta=a-b;
	cout<<"La suma de los n�meros ingresados es: "<<resta<<endl;
}
void multiplicar(int a,int b){
	int multiplicacion;
	multiplicacion=a*b;
	cout<<"La suma de los n�meros ingresados es: "<<multiplicacion<<endl;
}
void dividir(int a,int b){
	double division;
	division=(double)a/(double)b;
	cout<<"La suma de los n�meros ingresados es: "<<division<<endl;
}
void (*funciones[])(int a,int b)={sumar,restar,multiplicar,dividir};/*vector de puntero a funciones.*/
int main(int argc, char *argv[]) {
	int a,b;
	cout<<"Ingrese el valor del primer n�mero: ";
	cin>>a;
	cout<<"Ingrese el valor del segundo n�mero: ";
	cin>>b;
	for (int i=0;i<4;i++){
		(*funciones[i])(a,b);
	}
	system("pause");
	return 0;
}

