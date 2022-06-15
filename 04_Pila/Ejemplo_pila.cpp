/*
pila es una lista abierta que solo se pude insertar y eliminar nodos 
en uno de los extremos de la lista. Esta accion se le conoce como 
"push"
*/

//vamos a crear un ejemplo de una pila simple para hacer
//torres de 

#include<iostream>
#include<stdlib.h>

using namespace std;
//ejemplo de una pila
struct nodo{
	int valor;
	Nodo *siguiente;
}

//metodos
void insertarpila(Nodo *&, int);
void mostrarPila(Nodo *&);
void eliminarPila(Nodo *&, int &);

int main(){
	/*
	El primero en entrar es el ultimo en salir,
	el utimo que entra es el primero en salir
	*/
	int cantidad, i = 0, op = 1, v;
	
	//declaro la pila
	Nodo *pila = NULL;
	//menu
	while(op!=4){
		cout<<"Selecciona la opcion deseada: \n";
		cout<<"1.-Insertar valor:\n";
		cout<<"2.-Mostrar valores:\n";
		cout<<"3.-Eliminar valor:\n";
		cout<<"4.-Salir:\n"
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese la cantidad de valores a inseertar en la pila: \n";
				cin>>cantidad;
				
				while(i<cantidad){
					count<<"Ingrese el valor: \n";
					cin>>v;
					insertarPila(pila, v);
					i++;
				}
				break;
				
			case 2:
				mostrarPila(pila);
			break;
				
			case 3:
				//saber si esta vacia
				if(pila == NULL){
					cout<<"No se puede eliminar, pila vacia";
				}else{
					cout<<"Se elimina el valor\n"
					while(pila != NULL){
						//hay valores
						eliminarPila(pila, v);
						if(pila != NULL){
							cout<<v<<" | "<<endl;
						}else{
							cout<" * "<<endl;
						}
					}
				}
				break;
				default:
					cout<<"La opcion no existe\n"endl;
		}
		return 0:		
	}
}
