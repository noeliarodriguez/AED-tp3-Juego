/*----------------------------------------
|  Autor: Noelia Rodriguez               |
|  Fecha:  29/4                          |
|----------------------------------------|
|  Descripción del Programa:             |                          
|  Juego de adivinanzas                  |                                        
| -------------------------------------*/

#include <iostream>
#include <cstdlib>
using namespace std;

//Variables
string tema1 = "1- Historia ";
string tema2 = "2- Geografia ";
string tema3 = "3- Matematica";
string opciones = tema1+tema2+tema3 + "\n";
int respuesta;
int preg_correctas;
int opcion;

//Funciones de temas
void temaHistoria(){
	string preg1 = "Cuantas veces fue reformada la Constitucion de Argentina?";
	string preg2 = "Cuantos meses duro la Guerra de Malvinas?";
	cout << preg1 <<endl;
	cin >> respuesta;
	if (respuesta == 6){
			cout << "Correcto!"<<endl;
			preg_correctas++;
			}
	else{
		cout << "Incorrecto!"<<endl;
	}
	cout << preg2 <<endl;
	cin >> respuesta;
	if (respuesta == 3){
			cout << "Correcto!"<<endl;
			preg_correctas++;
			}
	else{
		cout << "Incorrecto!"<<endl;
		}
}
void temaGeografia(){
	string preg1 = "Cuantos paises hay en total?";
	string preg2 = "Cuantos oceanos hay en total?";
	cout << preg1 <<endl;
	cin >> respuesta;
	if (respuesta == 6){
			cout << "Correcto!"<<endl;
			preg_correctas++;
			}
	else{
		cout << "Incorrecto!"<<endl;
	}
	cout << preg2 <<endl;
	cin >> respuesta;
	if (respuesta == 3){
			cout << "Correcto!"<<endl;
			preg_correctas++;
			}
	else{
		cout << "Incorrecto!"<<endl;
		}
}

void temaMatematica(){
	string preg1 = "Cuanto es 2 + 2?";
	string preg2 = "Cual es la raiz cuadrada de 64?";
	cout << preg1 <<endl;
	cin >> respuesta;
	if (respuesta == 4){
			cout << "Correcto!"<<endl;
			preg_correctas++;
			}
	else{
		cout << "Incorrecto!"<<endl;
	}
	cout << preg2 <<endl;
	cin >> respuesta;
	if (respuesta == 8){
			cout << "Correcto!"<<endl;
			preg_correctas++;
			}
	else{
		cout << "Incorrecto!"<<endl;
		}
}
//Funcion para elegir los temas
void temas(){
	cout << opciones;
	cin >> opcion;
	while (opcion > 3){
		cout << opciones;
		cin >> opcion;
	}
	if (opcion == 1){
			temaHistoria();
		}else if ( opcion == 2){
			temaGeografia();
		}else if (opcion == 3){
			temaMatematica();
		}
	
	
	}
	


int main(){
	cout << "Elegir una tematica para responder preguntas: "<<endl;
	int salir;
	while (salir != 2){
		temas();
		cout << "1-Jugar | 2-Salir"<<endl;
		cin >> salir;
	}
	
	cout << "Fin del juego!"<<endl;
	cout << "Usted ha respondido "<<preg_correctas<<" preguntas correctas";
	
	return 0;

}


	
