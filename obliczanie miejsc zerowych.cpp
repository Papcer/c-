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
	if (a==0)
	{
		cout << "Brak miejsc zerowych funkcji ";
	}
	else if(a!=0 || b!=0)
	{
	 x=b/a ;	
		cout << "Miejsce zerowe danej funkcji to " << x ;
	}
	
	return 0;
}
