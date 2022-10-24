#include <iostream>
using namespace std;

int main()
{
	double a,b,x;
	cout << "Obliczanie miejsc zerowych funkcji ax + b " << endl;
	cout << "Podaj a ";
	cin >> a;
	cout << "Podaj b ";
	cin >> b;
	cout << endl;
	cout << "Funckja ma postac " << a <<"x + " << b << " = 0" << endl;  
	x = b/a ;
	
	cout << "Miejsce zerowe danej funkcji to " << x ;
	return 0;
}
