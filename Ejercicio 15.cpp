#include "iostream"
#include <math.h>
#include <conio.h>

using namespace std;
int main (int argc, char* argv[])
{
 double altura, volumen, radio, pii;
	cout << "    Programa que calcula el volumen de los tanques cilindricos."<<endl;
	cout << "Ingrese la altura: ";
	cin >> altura;

	while (altura<0)
    {
        cout << "La altura no puede ser negativa"<<endl;
		cout << "Digite el valor correcto de la altura: ";
		cin >> altura;
    }
		
	pii = 3.1416;
	radio = 2;
	volumen = pii * pow(radio,2) * altura;
	cout << "El volumen del cilindro calculado es: "<<volumen<< " cm³";
    getch();
    return 0;


}

