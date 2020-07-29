#include "iostream"
#include <conio.h>

using namespace std;

int main (){
   double Gb, Mb, Kb, byte;
   long bits;
	cout << "Convertidor de Gigabytes a bits" <<endl;
	cout << "Escriba la cantidad en Gigabytes para convertir: ";
	cin >> Gb;
	Mb = 1024 * Gb;
	Kb = 1024 * Mb;
	byte = 1024 * Kb;
	bits = 8 * byte;
	cout << "Gygabite equivalee a: " <<bits<< " bits";
   getch();
   return 0;

 }