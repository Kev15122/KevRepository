#include "iostream"
#include <conio.h>

using namespace std;
int main(nt argc, char* argv[])
{
    int dias, edad, mesac, diaMes, mesDia, anioTran;
	cout<<  "Calculadora que indica los dias vividos aproximadamente." <<endl;
	cout << "Digite tu edad: ";
	cin >> edad;
	cout<< "Digite el mes actual en numeros: ";
	cin>> mesac;
	cout << "Digite el dia del mes actual: ";
	cin >> diaMes; 
	anioTran = edad * 365;
	mesDia = (mesac * 30) + diaMes;
	dias = anioTran + mesDia;
	cout << "Los dias vividos aproximadamente son: " <<dias;
  getch();
  return 0;
}