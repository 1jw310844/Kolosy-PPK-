#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;


int main()
{
    srand(time(0));
    int wzrost;
    double waga;
    double BMI;

    do
    {
        cout << "Podaj wzrost: ";
        cin >> wzrost;
    } while (wzrost <= 0);
    do
    {
        cout << "Podaj wage: ";
        cin >> waga;
    } while (waga <= 0.0);

    BMI = waga / (wzrost * wzrost);

    cout << "BMI dla podanych wartosci to: " << setprecision(2) << fixed << BMI << endl;

    int maks;
    cout << "Podaj maks liczbe: "; cin >> maks;

    const int wiersz = 6;
    const int kolumna = 5;
    int tablica[wiersz][kolumna];
    int suma = 0;

    for (int i = 0; i < wiersz; i++)
    {
        for (int j = 0; j < kolumna; j++)
        {
            tablica[i][j] = rand() % maks;
            suma = suma + tablica[i][j];
            cout << tablica[i][j];
        }
        cout << "  Suma to: " << suma;
        suma = 0;
        cout << endl;
    }

    int x1, y1, x2, y2;
    cout << endl << "Podaj x1: "; cin >> x1;
    cout << endl << "Podaj y1: "; cin >> y1;
    cout << endl << "Podaj x2: "; cin >> x2;
    cout << endl << "Podaj y2: "; cin >> y2;

    int* wsk1 = nullptr;
    int* wsk2 = nullptr;

    wsk1 = &tablica[x1][y1];
    wsk2 = &tablica[x2][y2];
    int odleglosc = 0;
    if (wsk1 > wsk2)
    {
        int* wskTym = wsk2;
        wsk2 = wsk1;
        wsk1 = wskTym;
    }
    for (int* wskTeraz = wsk1; wskTeraz < wsk2; wskTeraz++)
    {
        odleglosc++;
    }
    cout << endl << odleglosc;
}
