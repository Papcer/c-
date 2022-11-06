#include <iostream>
using namespace std;

int main()
{
	int wybor;
	double a,b,x,c,q,w;
	double delta=0, x1=0, x2=0;
	cout << "-----------------------------------------------------------------" << endl;
	cout << "Wybierz rodzaj funckji z ktorej ma byc obliczone miejsce zerowe" << endl;
	cout << "1: Funkcja liniowa" << endl;
	cout << "2: Funckja kwadratowa" << endl;
	cout << "-----------------------------------------------------------------" << endl;
	cin >> wybor;
	
	if (wybor == 1)
	{
		cout << "Obliczanie miejsc zerowych funkcji Ax + By + C = 0" << endl;
		cout << "Podaj a ";
		cin >> a;
		cout << "Podaj b ";
		cin >> b;
		cout << "Podaj c ";
		cin >> c;
		cout << endl;
		cout << "Funckja ma postac " << a << "x + " << b << "y +" << c << " = 0" << endl;

		if (a == 0)
		{
			if (b == 0)
			{
				cout << "brak rozwiazan";
			}
			else
			{
				x = c / b;
				cout << "funckja stala y= " << x;
			}
		}
		else if (b == 0)
		{
			if (c == 0) {
				cout << "nieskoczenie wiele";
			}
			else {
				x = c / a;
				cout << "miejsece zerowe wynosi x= " << x;
			}
		}
		else if (c == 0)
		{
			cout << "wiele par";
		}
		else {
			q = ((-1) * a) / b;
			w = ((-1) * c) / b;
			x = w / q;
			cout << x;
		}
	}
	else if (wybor == 2)
	{
		cout << "Obliczanie miejsc zerowych funkcji Ax^2 + Bx + C  = 0" << endl;
		cout << "Podaj a ";
		cin >> a;
		cout << "Podaj b ";
		cin >> b;
		cout << "Podaj c ";
		cin >> c;
		cout << endl;
		cout << "Funckja ma postac " << a << "x^2 + " << b << "x +" << c << " = 0" << endl;

		if (a != 0)
		{
			delta = (b * b) - 4 * a * c;
			cout << "Delta = " << delta << endl;
			if (delta > 0)
			{
				x1 = (-1 * b - sqrt(delta)) / (2 * a);
				x2 = (-1 * b + sqrt(delta)) / (2 * a);
				cout << "Pierwsze miejsce zerowe: " << x1 << endl;
				cout << "Drugie miejsce zerowe: " << x2 << endl;
			}
			else if (delta == 0) {
				x1 = (-1 * b) / (2 * a);
			}
			else {
				cout << "Brak miejsce zerowych: ";
			}
		}
		else
		{
			cout << "a rozne od 0 , jest to funkcja liniowa" << endl;
		}
	}


		
	return 0;
}
