#include "iostream"
#include <math.h>
#include <conio.h>

using namespace std;

int main(int argc, char* argv[])
{
 double x1, y1, x2, y2, distancia, distanciaCuadrado;
	cout << "Programa que calcula la distancia entre dos puntos en R2."<<endl;
	cout << "Digite la coordenada x del primer punto (x1): ";
	cin >> x1;
	cout << "Digite la coordenada y del primer punto (y1): ";
	cin >> y1;
	cout << "Digite la coordenada x del segundo punto (x2): ";
	cin >> x2;
	cout << "Digite la coordenada y del segundo punto (y2): ";
	cin >> y2;
	distanciaCuadrado = pow((x2-x1),2) + pow((y2-y1),2);
	distancia = sqrt(distanciaCuadrado);
	cout << "La distancia entre (" <<x1<<"," <<y1<<") y (" <<x2<<"," <<y2<<") es igual a la raiz cuadrada de "<<distanciaCuadrado <<endl;
	cout << "Lo cual es igual a: "<<distancia;
    getch();
    return 0;

}