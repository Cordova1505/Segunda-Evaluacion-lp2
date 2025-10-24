#include<iostream>

using namespace std;

int main(){
	//aqui agregue la variable repetir para que el do while funcione y repita el codigo
	char repetir = 'Y';
	do{
	int numero_de_vehiculo = 0;  int precio = 0; int cont1 = 0; int cont2 = 0; int cont3 = 0;
	int preciomayor = 0; 
	
	cout<<"Cuantos vehiculos vendiste: ";
	cin>>numero_de_vehiculo;
	int i = 1 ;
	while(i <= numero_de_vehiculo){
		cout<<"Dame el precio del vehiculo numero "<<i<<" :";
		cin>>precio;
		/*
		en este caso agregue  4 if para poder saber cuantos vehiculos vendi y en que rango de precio entraban
		y el 4 if fue para saber cual fue el precio mayor
		*/
		if(precio <= 50000){
			cont1 = cont1 +1;
		}
		if(precio >= 75000 && precio <= 145000){
			cont2 = cont2 +1;
		}
		if(precio>= 185000){
			cont3 = cont3 +1;
		}
		if(precio > preciomayor){
			preciomayor = precio;
		}
		 i = i+1;
	}
	/*
	personalmente usamos while porque resulta mas comodo para nosotros.
	*/
	cout<<"Vendiste "<< cont1<<" vehiculos menores a 50.000$"<<endl;
	cout<<"Vendiste "<< cont2<<" vehiculos que estan entre 75.000$ y 145.000$"<<endl;
	cout<<"Vendiste "<< cont3<<" vehiculos ,mayores a 185.000$"<<endl;
	cout<<"La mayor venta fue "<< preciomayor<<"$"<<endl;
	cout<<"Quieres volver a hacer la cuenta Y / N : "<<endl;
	cin>>repetir;

 }while( repetir == 'Y');
}
