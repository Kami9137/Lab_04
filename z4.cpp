// Zadanie 4

#include <iostream>
using namespace std;

long long dwusilnia(unsigned int n) {
    long long ds = 1;

    for (; n > 1; n -= 2)
        ds *= n;

    return ds;
}

int main() {
    unsigned int n;

    cout << "Podaj liczbe: ";
    cin >> n;
    cout << "Dwusilnia liczby " << n << " wynosi " << dwusilnia(n) << endl;

    return 0;
}

