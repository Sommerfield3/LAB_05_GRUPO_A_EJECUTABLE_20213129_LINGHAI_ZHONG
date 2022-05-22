/*2. Cree dos vectores con valores flotantes y asígnele valores aleatorios, para esto deberá
de asignar memoria a cada vector. Calcule el producto punto de vectores y muestre
por pantalla. Una vez finalizado este proceso, retire la memoria asignada a los punteros. Repita este proceso de asignación y retiro de memoria dentro de un for de
1 000 000 veces.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
#include <cstdlib>
#include<time.h>
#include<vector> 
using namespace std;
int main(int argc, char *argv[]) {
	srand(time(0));
	for (int i=0; i<1000000; i++){
		int tam;
		tam=2;
		float* vector1=new float[tam];
		float* vector2=new float[tam];
		float* productoPunto=new float[tam];
		for (int j=0;j<tam;j++){
			vector1[j]=(rand()%1000);
		}
		for (int j=0;j<tam;j++){
			vector2[j]=(rand()%1000);
		}
		for (int k=0;k<tam;k++){
			productoPunto[k]=vector1[k]*vector2[k];
		}
		cout<<"Vector 1: ";
		for (int g=0;g<tam;g++){
			if (g==0){
				cout<<"("<<vector1[g];
			}
			else if (g==(tam-1)){
				cout<<","<<vector1[g]<<")";
			}
			else{
				cout<<","<<vector1[g];
			}
		}
		cout<<endl;
		cout<<"Vector 2: ";
		for (int g=0;g<tam;g++){
			if (g==0){
				cout<<"("<<vector2[g];
			}
			else if (g==(tam-1)){
				cout<<","<<vector2[g]<<")";
			}
			else{
				cout<<","<<vector2[g];
			}
		}
		cout<<endl;
		cout<<"Producto Punto de los vectores: ";
		for (int g=0;g<tam;g++){
			if (g==0){
				cout<<"("<<productoPunto[g];
			}
			else if (g==(tam-1)){
				cout<<","<<productoPunto[g]<<")";
			}
			else{
				cout<<","<<productoPunto[g];
			}
		}
		cout<<endl;
		delete [] vector1;
		delete [] vector2;
		delete [] productoPunto;
	}
	return 0;
}

