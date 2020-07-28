#include "iostream"
#include <math.h>

using namespace std;
int main(int argc, char* argv[]){
	double sexagesimal, radianes, radianesEnPi;
	cout<< "Convertidor de grados sexagemiales a radianes." <<endl;
	cout<< "Digite los grados sexagesimales: ";
	cin>> sexagesimal;
	radianes = (sexagesimal * (M_PI/180));
	radianesEnPi = radianes/M_PI;
	cout << sexagesimal << " grados sexagesimales es igual a " << radianes << " radianes." <<endl;
	cout<<"O tambien" <<radianesEnPi<<"radianes."<<endl;
	return 0;

}
