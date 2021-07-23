#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int menu();
int ejercicio1();
int ejercicio2();

int main() {
	menu();//llamo el metodo
	return 0;
}//fin del main

int menu(){
	int  opcion = 0;
	while(opcion != 3 ){
	cout << "-------Bienvenido Al Menu-------\n"
	 << 	"1. Ejercicio 1(SUMATORIA)\n" 
	 << 	"2. Ejercicio 2(FORMULA)\n"
	 << 	"3. Salir\n" 	
	 << 	"Ingrese su Opcion Porfavor: \n"
	 << 	"===>" << endl;
	cin >> opcion;
	switch(opcion){
			case 1:{
				ejercicio1();
				cout << "\n";
				break;
			}//fin del case 1
			case 2:{
				ejercicio2();
				cout << "\n";
				break;
			}//fin del case 2
			case 3:{
				cout << "Saliendo del Sistema..." << "\n";
				break;
			}//fin del case 3
		}//fin del switch
	}//fin del while
	return 0;
}//fin del metodo Menu

int ejercicio1(){
	int numero = 0; //el numero de iteraciones 
				cout<<"***SUMATORIA***"<< "\n";
				cout<<"Ingrese el numero de iteraciones de la Sumatoria: "<< "\n";
				cout<<"===>" << "\n";
				cin >> numero;
				double resultado = 0;
				for(int v = 1; v <= numero; v++){
					double numerador = (2 * v) - 1;
					double denominador = v * (v + 1);
					resultado = resultado + (numerador / denominador);
					cout<<"Numero de Iteracion("<<v<< "); Resultado = "<<resultado << "\n";	
				}//fin del for que recorre la sumatoria
				cout << "FIN EJERCICIO 1" << "\n";
	return 0;
}//fin del  metodo ejercicio 1

int ejercicio2(){
	double numero = 0;
	cout<<"***FUNCION***"<< "\n";
	cout<<"Ingrese el numero para calcular la Funcion: "<< "\n";
	cout<<"===>" << "\n";
	cin >> numero;
	double euler_number = exp(numero);
	double resultado = 1 / (1 + euler_number);
	cout << "El resultado de la Funcion es: " << resultado << "\n"; 
	return 0;
	cout << "FIN EJERCICIO FUNCION" << "\n";
}//fin del metodo ejercicio


	
