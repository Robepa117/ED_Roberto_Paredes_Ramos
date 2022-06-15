#include <iostream>
using namespace std;

int main(){
/*/vamos a crear un do while
	int i = 1;
	do{
		//imprima cada elemento hasta el 10
		cout<<i<<end
		i++;
	}while(i<=10);*/
	
   /*	//while
    int cout = 1;
    while(cont<= 10){
	    cout<<cont<<endl;
	    cont++
    }
    cout<<"Se acabo";*/

   /* //otro while 
    int contador = 1;
    while(contador <= 20){
		cout<<"Debo hacer la Tarea T_T"<<" "<<contador<<endl;
		contador++
	}
	cout<<"Se acabo otra vez";*/


	/*//for
	for(int i = 1; i <= 10; i++)
	cout<<i<<endl;*/
	
	//menu
	int seleccion, l;
	do{
		cout<<"\n Menu 1, 2, 3 otra opcion es salir \n";
		cout<<"Opcion 1\n";
		cout<<"Opcion 2\n";
		cout<<"Opcion 3\n";
		cout<<"Otra Opcion\n";
		cout<<"Ingrese la seleccion\n";
		
		cin>>seleccion;
		
		switch(seleccion){
			case 1:
				cout<<"Opcion 1";
				break;
			case 2:
				cout<<"Opcion 2";
				break;
			case 3:
				cout<<"Opcion 3";
				break;
			case 4:
				cout<<"adios";
				break;
		}
	}while((seleccion > 0)&&(seleccion < 4));
}




