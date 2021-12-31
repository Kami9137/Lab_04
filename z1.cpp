// Zadanie 1
#include <iostream>
using namespace std;

double kolo(float r) {
    return (3.14 * r * r);
}

float prostokat(float a, float b) {
    return(a * b);
}

float trojkat(float a, float h) {
    return((a * h) / 2);
}

float szescian(float a) {
    return(a*a*a);
}

double walec(float r, float h) {

    return(3.14 * r * r * h);
}

void sprawdz(float &temp) {
    while (temp <= 0) {
        cout << "Liczba nie moze byc mniejsza, ani rowna 0, podaj ponownie: "; cin >> temp;
    }
}

void sprawdz(float &temp, float &temp2) {
    while (temp <= 0 || temp2 <=0) {
        cout << "Wartosci musza byc wieksze od 0, podaj ponownie: " << endl;
        cout << "Wartosc a: "; cin >> temp;
        cout << "Wartosc b: "; cin >> temp2;
    }
}
int main()
{
    float temp, temp2;
    cout << "Podaj r (promien) kola: "; cin >> temp;
    sprawdz(temp);
    cout << "Pole kola wynosi: " << kolo(temp) << endl;
    

    cout << "\nPodaj bok a prostokata: "; cin >> temp;
    cout << "Podaj bok b prostokata: "; cin >> temp2;
    sprawdz(temp, temp2);
    cout << "Pole prostokata wynosi:  " << prostokat(temp, temp2) << endl;

    cout << "\nPodaj podstawe trojkata: "; cin >> temp;
    cout << "Podaj wysokosc podstawy oposzczonej na podstawe: "; cin >> temp2;
    sprawdz(temp, temp2);
    cout << "Pole trojkata wynosi: " << trojkat(temp, temp2) << endl;

    cout << "\nPodaj bok szescianu: "; cin >> temp;
    sprawdz(temp);
    cout << "Objetosc szescianu wynosi: " << szescian(temp) << endl;

    cout << "\nPodaj promien walca: "; cin >> temp;
    cout << "Podaj wysokosc walca: "; cin >> temp2;
    sprawdz(temp, temp2);
    cout << "Pole walca wynosi: " << walec(temp, temp2) << endl;
}
