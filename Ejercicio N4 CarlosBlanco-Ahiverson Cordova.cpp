#include <iostream>
using namespace std;
int main(){
	char repetir= 'Y';
	do{
	int num=0; int i=0; int suma_divisores=0;
	cout<<"Ingrese el numero: "<<endl;
	cin>>num;

	while(i < num / 2){
		i= i+1;
		if(num % i == 0){
			suma_divisores += i;
		}
	}	
	if(suma_divisores == num){
		cout<<"Su numero es perfecto"<<endl;
		}
	
	else{
		cout<<"Su numero no es perfecto"<<endl;
} cout<<"Quieres volver a hacer la cuenta Y / N: "<<endl;
cin>>repetir;
} while (repetir == 'Y');

}

