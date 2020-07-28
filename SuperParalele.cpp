#include "iostream"
#include <conio.h>

using namespace std;
int main (){
  double a, b,c, superficie;
	cout << "Calculadora de la superficie del paralelepípedo rectangular." <<endl;
	cout << "Ingrese el lado a: ";
	cin >> a;
	cout  << "Ingrese el lado b: ";
	cin >> b;
	cout  << "Ingrese el lado c: ";
	cin >> c;
	superficie = 2 * (a * b) + 4 * (a * c);
	cout  << "La superficie total del paralelepípedo es: "<< superficie <<" u2";
    getch();
    return 0;


}