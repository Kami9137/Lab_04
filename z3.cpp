// Zadanie 3

#include <iostream>
using namespace std;

void konwersja(int n) {
    int i = 0, tab[31];

    while (n) {
        tab[i++] = n % 2;
        n /= 2;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << tab[j];
    }
}

int main()
{
    int n;

    cout << "Podaj liczbe: ";
    cin >> n;

    cout << "\nLiczba " << n << " zmieniona na postac binarna jest rowna: ";
    konwersja(n);
    cout << endl;

    return 0;
}
