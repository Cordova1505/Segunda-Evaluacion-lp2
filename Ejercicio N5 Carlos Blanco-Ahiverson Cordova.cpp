#include <iostream>
#include <math.h>
using namespace std;
int main(){
	char repetir= 'Y';
	do{
	int rango1=0; int rango2=0; int i=0; int primos=0; int pares=0; int cont_divisor=0;
	cout<<"Indique el rango (inicio y final, en ese orden): "<<endl;
	cin>>rango1; cin>>rango2;
	if(rango1>rango2){
		cout<<"Orden de los rangos incorrecto"<<endl;
	}
	i= rango1;
	
	while(i>= rango1 && i <=rango2){
		i= i+1;
		if(i <= sqrt(i)){
			primos= i;
		cout<<"Los numeros primos entre ese rango son: "<<primos<<endl;
	}

	if(i % 2 == 0){
		pares= i;
		cout<<"Los numeros pares entre ese rango son: "<<pares<<endl;
	}
} cout<<"Quieres volver a hacer la cuenta Y / N: "<<endl;
cin>>repetir;
}
while (repetir == 'Y');
}
