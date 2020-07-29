#include "iostream"
#include <conio.h>
using namespace std;

int main(int argc, char* argv[]){
double nota1, nota2, nota3, promedio; 
cout<< "Este programa saca el promedio de tres notas."<<endl;
cout<< "<<endlDigite la nota 1: "
cin>> nota1;
cout<< "Digite la nota 2: ";
cin>> nota2;
cout<< "Digite la nota 3: ";
cin>> nota3;
promedio = (nota1+nota2+nota3)/3;
cout<< "El promedio de las 3 notas es: " <<promedio;
getch();
return 0;

}
