#include<iostream>

using namespace std;

int main(){

char cadena_de_caracteres[10] = "0";
int i = 0;
char a; char repetir = 'Y';
int resultado = 0;

do{

cout<<"Ingrese un numero en base a el alfabeto: ";
	cin>>cadena_de_caracteres;

while(i <= 10){
	
	a = cadena_de_caracteres[i];
	i = i + 1;
	switch (a){
		case 'A':
			resultado = resultado + 0;
		break;
		case 'B':
			resultado = resultado + 1;
		break;
		case 'C':
			resultado = resultado + 2;
		break;
		case 'D':
			resultado = resultado + 3;
		break;
		case 'E':
			resultado = resultado + 4;
		break;
		case 'F':
			resultado = resultado + 5;
		break;
		case 'G':
			resultado = resultado + 6;
		break;
		case 'H':
			resultado = resultado + 7;
		break;
		case 'I':
			resultado = resultado + 8;
		break;
		case 'J':
			resultado = resultado + 9;
		break;
		case 'K':
			resultado = resultado + 10;
		break;
		case 'L':
			resultado = resultado + 11;
		break;
		case 'M':
			resultado = resultado + 12;
		break;
		case 'N':
			resultado = resultado + 13;
		break;
		case 'O':
			resultado = resultado + 14;
		break;
		case 'P':
			resultado = resultado + 15;
		break;
		case 'R':
			resultado = resultado + 16;
		break;
		case 'S':
			resultado = resultado + 17;
		break;
		case 'T':
			resultado = resultado + 18;
		break;
		case 'U':
			resultado = resultado + 19;
		break;
		case 'V':
			resultado = resultado + 20;
		break;
		case 'W':
			resultado = resultado + 21;
		break;
		case 'X':
			resultado = resultado + 22;
		break;
		case 'Y':
			resultado = resultado + 23;
		break;
		case 'Z':
			resultado = resultado + 24;
		break;
		
		 
	}
		 
}cout<<"Para tu codigo "<<cadena_de_caracteres<<" el resultado es "<<resultado<<endl;
	cout<<"Quieres volver a hacer la cuenta Y / N : "<<endl;
	cin>>repetir;
	resultado = 0; i = 0;
	
}while( repetir == 'Y');


}
