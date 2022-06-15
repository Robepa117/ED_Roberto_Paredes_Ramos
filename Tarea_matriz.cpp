#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int numeros[3][1];
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout<<"Ingrese dia ["<<i<<"]["<<j<<"]:\n ";
			cout<<"Ingrese mes ["<<i<<"]["<<j<<"]:\n ";
			cout<<"Ingrese anio ["<<i<<"]["<<j<<"]:\n ";
			cin>>numeros[i][j];
		}
	}
	
	cout<<"Matriz Original\n";
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"Matriz Transpuesta\n";
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout<<numeros[j][i]<<" ";
		}
		cout<<"\n";
	}
}
