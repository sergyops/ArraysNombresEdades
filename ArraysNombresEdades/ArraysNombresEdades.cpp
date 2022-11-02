#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8"); //Configuración regional (para imprimir bien las tildes)

    string nombre[10];
    int edad[10];

    for (int i = 0; i < 10; i++) {

        cout << "Introduce el nombre de la posición: " << i + 1 << "\n";
        cin >> nombre[i];

        cout << "Introduce la edad de la posición: " << i + 1 << "\n";
        cin >> edad[i];

        while (edad[i] <= 0 || edad[i] > 100)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Edad no válida, introduce una edad válida\n";
            cin >> edad[i];
        }
        cout << "-----------------------------------------------------\n\n";
    }
    cout << "MOSTRANDO INFORMACIÓN\n\n";
    cout << "-----------------------------------------------------\n\n";

    for (int i = 0; i < 10; i++) {

        cout << "Posición - " << i << "\n";
        cout << "Nombre: " << nombre[i] << "\n";
        cout << "Edad: " << edad[i] << "\n";
        cout << "-----------------------------------------------------\n";
    }
}