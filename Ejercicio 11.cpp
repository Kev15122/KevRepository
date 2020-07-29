#include "iostream"
#include <conio.h>

using namespace std;

int main(int argc, char* argv[])
{
  double igv, precioUni, cant, montoPar, monTotal;
	cout << "   Propgrama que calcula el monto parcial y total de la compra de un producto." <<endl;
	cout << "Digite el precio de cada unidad: ";
	cin >> precioUni;
	cout << "Digite la cantidad de unidades del producto que se despachara: ";
	cin >> cant;
	montoPar = precioUni * cant;
	igv = 0.19 * montoPar;
	monTotal = montoPar + igv;
	cout << "El monto parcial de su compra es: " <<montoPar <<endl;
	cout << "El IGV es: S/  " <<igv <<endl;
	cout << "El monto total de la compra es: " <<monTotal;
    getch();
    return 0;

}