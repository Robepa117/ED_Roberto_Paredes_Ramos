/*Ejemplo de dos pilas
El programa consiste en crear
un menu con 4 opciones para 
apilar, ver, unir y salir*/


#include<iostream>
#include<conio.h>

//la estrucutura del nodo
struct nodo{
	int nro;
	struct nodo *siguiente;
};

//definir un tipo de estructura
typedef nodo *pila;

using namespace std;

//metodos recordando que tengo 2 pilas

void imprimir1(pila);
void imprimir2(pila);
void eliminarPila(pila &);
void push(pila &, int);
void unirPilas(pila, pila);
int pop(pila &);

main(){
	pila p1 = NULL;
	pila p2 = NULL;
	pila p = NULL;
	
	int opc, n, valor, i;
	
	do{
		cout<<"1.- Apilar \n";
		cout<<"2.- Eliminar Dato \n";
		cout<<"3.- Imprimir valores de la pila \n";
		cout<<"4.- Unir Pilas \n";
		cout<<"5.- Eliminar Pila \n";
		cout<<"6.- Salir \n";
		cout<<"Ingresa la opcion deseada: \n";
		
		cin>>opc;
		
		switch(opc){
			case 1: 
			cout<<"Ingresa el limite de la pila: \n";
			cin>>n;
			cout<<"Ingresa los valores pila 1: \n";
			for(i = 0; i < n; i++){
				cout<<"Elemento: "<<endl;
				cin>>valor;
				//meter
				push(p1, valor);
			} 
			cout<<"Ingresa los valores pila 2: \n";
			for(i = 0; i < n; i++){
				cout<<"Elemento: "<<endl;
				cin>>valor;
				//meter
				push(p2, valor);
			}
			break;
			
		case 2: if(p!=NULL)
   			{ cout<<"Valor Eliminado";
     		n=pop(p);
     		cout<<n<<endl;
   			}
   			else  cout<<"Pila vacia"<<endl;
   			break;
		case 3:
			cout<<"Contenido de la pila 1\n";
			imprimir1(p1);
			cout<<"Contenido de la pila 2\n";
			imprimir2(p2);
			break;
		case 4: 
			cout<<"Pilas Unidas\n";
			unirPilas(p1, p2);
			break;
			
		case 5:
		
   		cout<<"Pila Eliminada"<<endl;
   		eliminarPila (p);
   		break;
		
		}
	}while(opc!=6);
}


//push
void push(pila &p, int n){
	pila q = new(struct nodo);
	q -> nro= n;
	q->siguiente = p;
	p = q;
}

//Funci�n para eliminar elementos en la pila
int pop(pila &p)
{ int n=p->nro;
  pila q=p;
  p=p->siguiente;
  delete (q);
  return n;
}

//Funci�n para eliminar la pila
void eliminarPila(pila &p)
{ pila q;
  while(p!=NULL)
  {q=p;
   p=q->siguiente;
   delete(q); 
  }
}

void unirPilas(pila p1, pila p2){
	pila q = p1;
	while(q->siguiente != NULL){
		q = q->siguiente;
		q->siguiente = p2;
	}
}

//Funci�n para visualizar elementos en la pila
void imprimir(pila p1)
{ while(p1!=NULL)
 {cout<<p1->nro<<endl;
  p1=p1->siguiente;
 }
cout<<endl;
}

void imprimir1(pila p1){
	while(p1!=NULL){
		cout<<"Valor: "<<p1->nro<<endl;
		p1=p1->siguiente;
	}
}

void imprimir2(pila p2){
	while(p2!=NULL){
		cout<<"Valor: "<<p2->nro<<endl;
		p2=p2->siguiente;
	}
}
