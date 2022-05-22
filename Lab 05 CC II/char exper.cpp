/*5. Implemente su propia función de concatenación de cadenas de texto especial (¡no es
la función ordinaria de concatenación!), recibirá como parámetro dos punteros de
caracteres y tendrá que asignar el contenido del segundo puntero al INICIO del primer
puntero. La función no retorna ningún valor.*/
#include <iostream>
using namespace std;
void concatenacion(char *puntero1[], char *puntero2[],int tam1,int tam2){
	int tam3;
	tam3=tam1+tam2;
	char *aux=new char[tam3];
	for (int i=0;i<tam3;i++){
		if (i<(tam2)){
			aux[i]=puntero2[i];
		}
		else{
			aux[i]=puntero1[i-tam2];
		}
	}
	
}
	
int main(int argc, char *argv[]) {
	string a,b;
	int tam1,tam2;
	cout<<"Ingrese el texto 1: ";
	getline(cin,a);
	cout<<endl;
	cout<<"Ingrese el texto 2: ";
	getline(cin,b);
	cin.clear();
	tam1=a.length();
	tam2=b.length();
	char *puntero1=new char[tam1];
	for (int i=0;i<tam1;i++){
		puntero1[i]=a[i];
	}
	char *puntero2=new char[tam2];
	for (int i=0;i<tam2;i++){
		puntero2[i]=b[i];
	}
	cout<<endl;
	cout<<puntero1;
	concatenacion(puntero1,puntero2,tam1,tam2);
	system("pause");
	return 0;
}

