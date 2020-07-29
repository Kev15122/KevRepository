#include "iostream"
#include <conio.h>

using namespace std;

int main(int argc, char* argv[])
{
  int suma, N;
	cout << "Esta calculadora determina los N primeros numeros." <<endl;
	cout << "Digite el valor de N: ";
	cin >> N;

    while (N<0)
    {
       cout << "Este valor no puede ser negativo" <<endl;
       cout << "Por favor, digite correctamente el valor de N: ";
       cin >> N;
    }
    
	suma = (N * (N+1)) / 2;
	cout << "El resultado de dicha suma de numeros es: " <<suma;
    getch ();
    return 0;

}
