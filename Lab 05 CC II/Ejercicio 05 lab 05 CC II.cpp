/*5. Implemente su propia funci�n de concatenaci�n de cadenas de texto especial (�no es
la funci�n ordinaria de concatenaci�n!), recibir� como par�metro dos punteros de
caracteres y tendr� que asignar el contenido del segundo puntero al INICIO del primer
puntero. La funci�n no retorna ning�n valor.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
void concatenacion(string *a,string *b){/*Usamos un puntero de direccionamiento.*/
	string *aux=b;
	*b=*b+*a;
	*a=*b;
	*b=*aux;
}
	
int main(int argc, char *argv[]) {
	string x,y;
	cout<<"Ingrese el texto 1: ";
	getline(cin,x);
	cout<<endl;
	cout<<"Ingrese el texto 2: ";
	getline(cin,y);
	string* a=&x;
	string* b=&y;
	concatenacion(a,b);
	cin.clear();
	cout<<"Primera cadena de texto modificada: "<<*a<<endl;/*Los elementos aparecer�n seguidos sin una separaci�n puesto a que no es solicitada esta para una mejor visualizaci�n, sino solamente manipular los elementos contenidos. Ejemplo: a="hola yo"; b="estoy sentado"; a+b="hola yoestoy sentado". */
	system("pause");
	return 0;
}

