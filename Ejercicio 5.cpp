#include "iostream"
#include <conio.h>

using namespace std;

int main(int argc, char* argv[]){
    double cantidad, precioUnitario, efectivo, vuelto;
    cout << "Calculadora del vuleto en una compra." <<endl;
	cout << "Digite el precio unitario del producto que se va a vender:  ";
	cin >> precioUnitario;
	cout <<"Digite la cantidad de unidades del producto:  ";
	cin >> cantidad;
	cout << "Digite la cantidad de efectivo dado por el cliente:  ";
	cin >> efectivo;
	vuelto = efectivo - (cantidad * precioUnitario);
	cout << "El vuelto a entregar al cliente es: S/. " << vuelto;
    getch();
    return 0;

}