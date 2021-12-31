// Zadanie 2

#include <iostream>
using namespace std;

bool pierwsza(int n) {
    if (n < 2) //liczba pierwsza musi byc wieksza od 1
        return false;

    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0)
            return false;
        else
            return true;
    }

}

int main()
{
    int n;

    cout << "Podaj wartosc aby sprawdzic czy to jest liczba pierwsza: ";
    cin >> n;

    if (pierwsza(n))
        cout << "Liczba " << n << " jest pierwsza" << endl;
    else
        cout << "liczba " << n << " nie jest pierwsza" << endl;

    return 0;
}