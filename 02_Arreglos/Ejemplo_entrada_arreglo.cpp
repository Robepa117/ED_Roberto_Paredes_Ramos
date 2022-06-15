#include<iostream>

using namespace std;

int main(){
	
	//ejemplo de arreglo introducir datos
	
	float vector1[3];
	float vector2[3];
	float vectorsuma[3];
	
	int i = 0;
	
	//introducur los elementos del primer vector
	for(i = 0; i<3; i++){
		cout<<"\n Introduce el primer componente " <<i<<"del primer vector \n";
		cin>>vector1[i];
	}
	
	for(i = 0; i<3; i++){
		cout<<"\n Introduce el primer componente " <<i<<"del segundo vector \n";
		cin>>vector2[i];
	}
	
	//calculo de la suma
	for(i = 0; i<3; i++){
		vectorsuma[i] = vector1[i] + vector2[i];
	}
	
	cout<<"\n La suma de los vectores es: \n"
	
	for(i = 0; i<3; i++){
		cout<<vectorsuma[i] << " ";
	}
}
