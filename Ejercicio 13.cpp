#include "iostream"
#include <conio.h>

using namespace std;

int main(int argc, char* argv[])
{
 double kilo, libra, metro, pies;
	cout << "Programa que nos ayuda a reportar el peso y altura, en libras y pies." <<endl;
	cout << "Ingrese el peso: ";
	cin >> kilo;

	while (kilo<0)
    {
        cout << "El peso no se puede expresar en valores negativos.";
		cout << " Por favor, ingrese los valores correctos: ";
		cin >> kilo;
    }
    
    cout << "Ingrese la altura: ";
	cin >> metro;

	while (metro<0)
    {
        cout << "La altura no se puede expresar en valores negativos.";
		cout << " Por favor, ingrese los valores correctos: ";
		cin >> metro;
    }
     
	pies = metro * 3.2808;
	libra = kilo * 2.2046;
	cout << "El peso en libras es: " <<libra<< " y" " la altura en pies es: " <<pies<< " ft";


}