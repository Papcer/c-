#include <iostream>
using namespace std;

int main()
{
	double a,b,x,c,q,w;
	cout << "2. Obliczanie miejsc zerowych funkcji Ax + By + C = 0" << endl;
		cout << "Podaj a ";
		cin >> a;
		cout << "Podaj b ";
		cin >> b;
		cout << "Podaj c ";
		cin >> c;
		cout << endl;
		cout << "Funckja ma postac " << a <<"x + " << b << "y +" << c << " = 0"<< endl;  
			
		if (a == 0)
		{
			if (b==0)	
			{
				cout << "brak rozwiazan";
			}
			else
			{
				x = c/b; 
				cout << "funckja stala y= " << x;
			}
		} 
		else if (b==0)
		{
			if (c==0){
				cout << "nieskoczenie wiele";
			}	
			else{
				x = c/a;
				cout << "miejsece zerowe wynosi x= " << x;
			}
		}
		else if (c==0)
		 {
		 	cout << "wiele par";
		 }
		 	else{
			q = ((-1)*a)/b;
			w = ((-1)*c)/b;
			x = w/q;
			cout << x;
		}
	return 0;
}
