#include<iostream>

using namespace std;

//condiciones y opeeraciones a realizar
bool primo(int n){
	bool condicion;
	if(n != 1 && n != 0){
		for(int i = 2; i <= n; i++){
			if(n % i == 0){
				if(n == 1){
					condicion = true;
				}else{
					condicion = false;
					return condicion;
				}
			}
		}
	}else condicion = false;

	return condicion;
}

int main(){
	int numero;
	cout<<"Ingrese un numero:\n ";
	cin>>numero;
	for(int i = 1; i <= numero; i++){
		if(primo(i)){
			cout<<i<<endl;
		}
		
		return 0;
	}
}
