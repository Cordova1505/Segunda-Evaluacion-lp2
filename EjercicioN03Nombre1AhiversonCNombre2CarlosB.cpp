#include<iostream>

using namespace std;

int main(){
	char repetir = 'Y';
	do{
	float altura = 0; float alturam = 0; float alturamin = 1.5;
	char nombre[25] = "h"; //char nombreunicoMayor[25] = "h"; char nombreunicoMenor[25] = "h";
	int deportistas = 0; int alturacontrol = 0;
	string nombreunicoMenor;
	string nombreunicoMayor;
	int i = 1; float promedio = 0;
	cout<<"Cuantos deportistas quieres ingresar: ";
	cin>>deportistas;
	while( i <= deportistas){
	cout<<"Ingresa el nombre del deportista ";
	cin>>nombre;
	cout<<"Ingresa la altura del deportista ";
	cin>>altura;
	if(altura > alturam){
		alturam = altura;
		nombreunicoMayor = nombre;
	}
	if(altura < alturamin){
		alturamin = altura;
		nombreunicoMenor = nombre;
	}
	i = i+1;
	alturacontrol = altura + alturacontrol;
	promedio = (alturacontrol + promedio)/deportistas;
	}
	cout<<"El promedio de altura es: "<<promedio<<endl;
	cout<<"La altura menor es: "<<alturamin<<"Y la persona es "<<nombreunicoMenor<< endl;
	cout<<"La altura mayor es: "<< alturam<<" Y la persona es "<<nombreunicoMayor <<endl;
	cout<<"Quieres volver a hacer la cuenta Y / N : "<<endl;
	cin>>repetir;
}while( repetir == 'Y');
}
