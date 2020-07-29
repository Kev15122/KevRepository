#include "iostream"
#include <conio.h>

using namespace std;

int main (int argc, char* argv[])
{
  double galones, gasolina, cobro, litros, precio;
	cout << "Programa que calcula lo que se le debe cobrar al cliente por la gasolina."<<endl;
	cout << "Digite los galones entregados: ";
	cin >> galones;
	cout << "Digite el precio por cada litro: ";
	cin >> precio;
	litros = galones/0.2642;
	cobro = precio * litros;
	cout << "El monto de lo despachado al cliente es: S/ "<<cobro;
    getch();
    return 0;


}