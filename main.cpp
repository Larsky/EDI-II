#include <iostream>

using namespace std;

string nombre = "Ignacio";
string apellido = "Moral Calderon";
int edad = 19;

void MostrarDatos(){
    cout << "[ Presentacion del alumno ] " << endl;
    cout << "> Nombre: " << nombre << endl; 
    cout << "> Apellido: " << apellido << endl;
    cout << "> Edad: " << edad << endl << endl;
}

int main(){
    MostrarDatos();  
    cout << "Esta es la primer actividad de EDI II, presentar actividad en repositorio" << endl;

    system("pause");
    return 0;
}