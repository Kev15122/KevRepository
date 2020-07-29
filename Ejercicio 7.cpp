#include "iostream"
#include <conio.h>

using namespace std;
int main()
{
 double cen, kil; 
	cout << "Calculadora de centimetros a kilometros." << endl;
	cout << "Ingrese los centimetros para convertir: ";
	cin>>cen;
	kil = cen / 1000000;
	cout << "La conversion es: " <<kil<< " km"; 

    getch();
    return 0;

}
