#include "iostream"
#include <conio.h>
using namespace std;

int main(int argc, char* argv[]){
double base, altura, perimetro, superficie;
cout << "Calculadora de perimetro y superficie de un rectangulo." <<endl;
cout << "Digite la base: ";
cin >> base;
cout << "Digite la altura: ";
cin >> altura;
superficie = base * altura;
perimetro = (base + altura) * 2;
cout << "La superficie del rectangulo es: " << superficie << " U2 y el perimetro mide " << perimetro;
getch();
return 0;

}