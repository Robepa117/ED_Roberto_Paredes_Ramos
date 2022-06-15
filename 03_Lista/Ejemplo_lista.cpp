/*
Es una estructura de datos que derivan de una secuencia conectada de nodos,
y cada unio de los cuales contiene un dato

caracteristicas
hayn nodo al comienzo llamado la cabeza o frente
hay un nodo de termino llamado cola o atras

la lista solo puede ser recorrida en secuencia atras o hacia adelante

Apuntador:Un apuntadora indica donde inicia, es por eso que colocaremos uno en la csbeza,
otro al dato para obtener la informacion
y para indicar el final tenemos que apuntar al NULL

Operaciones de la estructura
 -Añadir o insertar elemento
 -Elemininar o borrar elemento
 -Buscar elementos
 
Elemento apuntador memoria(direccion de memoria / el peso )

"List" es una clase templete que nos permite crear listas que contengan cualquier tipo de objeto

incluye las operaciones:
 -push
 -pop
 -begin()
 -end()
 -size()
 -empty()
*/

#include<iostream>

using namespace std;

//definir la estructura de la lista
struct Nodo{
	//definir la estructura de la lista 
	int valor;
	Nodo *siguiente;
};

//metodo para insertar
void InsertarLista(Nodo *&, int);

int main(){
	//declarar el variable de la lista
	Nodo *lista = NULL;
	
	//variables 
	int op = 1, c, i = 0, valores;
	
	cout<<"Trabajando con listas(simples, doblemente enlazadas, circulares y circulares dobles)"<<endl;
	while(op! = 3){
		cout<<"Ejemplo de lista simple"<<endl;
		cout<<"1.- Insertar nuevo valor en la lista"<<endl;
		cout<<"2.- Ver la lista"<<endl;
		cout<<"3.- Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Indica el numero de valores a introducir \n";
				cin>>valores;
				while(i<valores){
					cout<<"Valor["<<i<<"]\n";
					cin>>c;
					//manda a llamar al metodo para insertar
					InsertarLista(lista, c);
					i++;
				}
				break;
				
			case 2:
				cout<<"Ver elementos de la lista";
				cout<<"Pendiente";
				break;
				
			default:
				cout<<"Gracias por estar aqui";
		}
	}
	
	return 0;
	
	void InsertarLista(Nodo *&lista, int c){
		Nodo *lista = new Nodo();
		inslista->valor = c;
		//necesito a un auxiliar para encadenar los valores de la lista
		Nodo *aux = lista;
		Nodo *aux2;
		
		//se meten ordenados los datos
		while((aux !=NULL)&&(aux->valor<c)){
			aux2=aux;
			aux = aux->siguiente;
		}
		
		if(inslista == aux){
			lista = inslista;
		}else{
			aux2->siguiente = inslista;
		}
		
		inslista->siguiente = aux;
		cout<<"Elemento: "<<c<<"Insertado"<<endl;
	}
}

//TAREA 
/*
imprimir el ultimo elemento de la lista y hacer que se borre un elemento 
*/
