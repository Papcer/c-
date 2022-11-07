#include <cmath>
#include <iostream>

using namespace std;

struct FunkcjaKwadratowaWartosci {
  double a = 0;
  double b = 0;
  double c = 0;
  double delta = 0;
  double p = 0;
  double q = 0;
  double x1 = 0;
  double x2 = 0;
};

void pokaz_inne_warianty_funkcji_kwadratowej(FunkcjaKwadratowaWartosci& fun) { cout << "End me pls"; }

int main() {
  int wybor;
  double a, b, x, c, q, w, p;
  double delta = 0, x1 = 0, x2 = 0;
  cout << "-----------------------------------------------------------------" << endl;
  cout << "-----------------------------------------------------------------" << endl;
  cout << "Wybierz rodzaj funckji z ktorej ma byc obliczone miejsce zerowe" << endl;
  cout << "1: Funkcja liniowa" << endl;
  cout << "2: Funckja kwadratowa w postaci Ax^2 + Bx + C  = 0 " << endl;
  cout << "3: Funkcja kwadratowa w postaci (ax-P)^2 + Q " << endl;
  cout << "4: Funkcja kwadratowa w postaci f(x)=a(x−x1)(x−x2) " << endl;
  cout << "-----------------------------------------------------------------" << endl;
  cout << "-----------------------------------------------------------------" << endl;

  cin >> wybor;

  // Wybór 1 (Liniowa)
  if (wybor == 1) {
    cout << "Obliczanie miejsc zerowych funkcji Ax + By + C = 0" << endl;
    cout << "Podaj a ";
    cin >> a;
    cout << "Podaj b ";
    cin >> b;
    cout << "Podaj c ";
    cin >> c;
    cout << endl;
    cout << "Funkcja ma postac " << a << "x + " << b << "y +" << c << " = 0" << endl;

    if (a == 0) {
      if (b == 0) {
        cout << "brak rozwiazan";
      } else {
        x = c / b;
        cout << "funckja stala y= " << x;
      }
    } else if (b == 0) {
      if (c == 0) {
        cout << "nieskoczenie wiele";
      } else {
        x = c / a;
        cout << "miejsece zerowe wynosi x= " << x;
      }
    } else if (c == 0) {
      cout << "wiele par";
    } else {
      q = ((-1) * a) / b;
      w = ((-1) * c) / b;
      x = w / q;
      cout << x;
    }

    // Wybór 2 (kwadratowa)
  } else if (wybor == 2) {
    cout << "Obliczanie miejsc zerowych funkcji Ax^2 + Bx + C  = 0" << endl;
    cout << "Podaj a ";
    cin >> a;
    cout << "Podaj b ";
    cin >> b;
    cout << "Podaj c ";
    cin >> c;
    cout << endl;
    cout << "Funckja ma postac " << a << "x^2 + " << b << "x +" << c << " = 0" << endl;

    FunkcjaKwadratowaWartosci wynik;
    wynik.a = a;
    wynik.b = b;
    wynik.c = c;

    if (a != 0) {
      delta = (b * b) - 4 * a * c;
      wynik.delta = delta;

      cout << "Delta = " << delta << endl;
      if (delta > 0) {
        x1 = (-1 * b - sqrt(delta)) / (2 * a);
        x2 = (-1 * b + sqrt(delta)) / (2 * a);
        cout << "Pierwsze miejsce zerowe: " << x1 << endl;
        cout << "Drugie miejsce zerowe: " << x2 << endl;
        wynik.x1 = x1;
        wynik.x2 = x2;

      } else if (delta == 0) {
        x1 = (-1 * b) / (2 * a);
        wynik.x1 = x1;
      } else {
        cout << "Brak miejsce zerowych: ";
      }
    } else {
      cout << "a rozne od 0 , jest to funkcja liniowa" << endl;
    }

    wynik.p = ((-1) * (wynik.b)) / (2 * wynik.a);
    wynik.q = ((-1) * (wynik.delta)) / (4 * wynik.a);
    pokaz_inne_warianty_funkcji_kwadratowej(wynik);

    // Wybór 3 (kanoniczna)
  } else if (wybor == 3) {
    cout << "Obliczanie miejsc zerowych funkcji kwadratowej w postaci a(x-P)^2 + Q" << endl;
    cout << "Podaj wartosc a : " << endl;
    cin >> a;
    cout << "Podaj wartosc p : " << endl;
    cin >> p;
    cout << "Podaj wartosc q : " << endl;
    cin >> q;
    b = 2 * a * p;
    c = p * p + q;

    FunkcjaKwadratowaWartosci wynik;
    wynik.a = a;
    wynik.b = b;
    wynik.c = c;

    if (a != 0) {
      delta = (b * b) - 4 * a * c;
      wynik.delta = delta;

      cout << "Delta = " << delta << endl;
      if (delta > 0) {
        x1 = (-1 * b - sqrt(delta)) / (2 * a);
        x2 = (-1 * b + sqrt(delta)) / (2 * a);
        cout << "Pierwsze miejsce zerowe: " << x1 << endl;
        cout << "Drugie miejsce zerowe: " << x2 << endl;
        wynik.x1 = x1;
        wynik.x2 = x2;

      } else if (delta == 0) {
        x1 = (-1 * b) / (2 * a);
        wynik.x1 = x1;
      } else {
        cout << "Brak miejsce zerowych: ";
      }
    } else {
      cout << "a rozne od 0 , jest to funkcja liniowa" << endl;
    }

    wynik.p = ((-1) * (wynik.b)) / (2 * wynik.a);
    wynik.q = ((-1) * (wynik.delta)) / (4 * wynik.a);
    pokaz_inne_warianty_funkcji_kwadratowej(wynik);

    // Wybór 4 (iloczynowe)
  } else {
    cout << "Obliczanie miejsc zerowych funkcji kwadratowej w postaci f(x)=a(x−x1)(x−x2)" << endl;
    cout << "Podaj wartosc A :";
    cin >> a;
    cout << "Podaj wartosc X1 : " << endl;
    cin >> x1;
    cout << "Podaj wartosc X2 : " << endl;
    cin >> x2;

    FunkcjaKwadratowaWartosci wynik;
    wynik.a = a;
    wynik.x1 = x1;
    wynik.x2 = x2;
    wynik.b = ((-1) * wynik.a) * (x1 + x2);
    wynik.c = wynik.a * wynik.x1 * wynik.x2;
    wynik.delta = (wynik.b * wynik.b) - 4 * wynik.a * wynik.c;
    wynik.p = ((-1) * (wynik.b)) / (2 * wynik.a);
    wynik.q = ((-1) * (wynik.delta)) / (4 * wynik.a);
    pokaz_inne_warianty_funkcji_kwadratowej(wynik);
  }

  return 0;
}
