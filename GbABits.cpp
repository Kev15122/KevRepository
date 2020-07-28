#include "iostream"
#include <conio.h>

using namespace std;

int main (){
   float Gb, Mb, Kb, byte, bits;
	cout << "Convertidor de Gigabytes a bits" <<endl;
	cout << "Escriba la cantidad en Gigabytes para convertir: ";
	cin >> Gb;
	Mb = Gb * 1024;
	Kb = Mb * 1024;
	byte = Kb * 1024;
	bits = 8 * byte;
	cout << "La cantidad convertida es: " <<bits<< " bits";
   getch();
   return 0;

 }