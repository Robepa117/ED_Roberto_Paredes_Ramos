//Programa pa identificar numero par o impar

#include<iostream>

using namespace std;

int resultado, numero;

int main(){
	cout<<"Ingrese un numero:\n ";
	cin>>numero;
	//opereacion para determianr si es par o impar
	resultado = numero / 2;
	//condicioes para identificarlo
	if(resultado == 1){
		cout<<numero << "Es par" <<endl;
	}else{
		cout<< numero << "Es impar" <<endl;
	}
}
