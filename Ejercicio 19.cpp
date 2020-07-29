#include "iostream"
#include <math.h>
#include <conio.h>

using namespace std;

int main (int argc, char* argv[])
{
    double volumen, r, pii;
	cout << "Calculadora del volumen de la esfera." <<endl;
	cout << "Digite el valor del radio: ";
	cin >> r;

	while (r<0)
    {
        cout<< "El radio no puede tener valor negativo." <<endl;
		cout<< "Digite el valor del radio: ";
		cin >> r;
    }
		
    pii = 3.1416;
	volumen = (4/3)*pii* pow(r,3);
	cout<< "El volumen de la esfera es: "<<volumen<< " cm3";
    getch();
    return 0;
	
	
}