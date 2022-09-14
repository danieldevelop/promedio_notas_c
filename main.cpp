#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	int tamanhioArray = 5;
	float notas[tamanhioArray];
	float suma = 0;
	float promedio = 0;
	
	for (int i = 0; i < tamanhioArray; i++) {
		cout<<"Digite nota "<<(i+1)<<" (Ej 5.6): "<<endl;
		cin>>notas[i];
		
		suma += notas[i];
	}
	
	promedio = suma / tamanhioArray;
	cout.precision(2);
	
	cout<<"\nLa suma de las notas es: "<< suma <<endl;
	cout<<"El promedio de notas es: "<< promedio <<endl;
	
	getche();
	return 0;
}
