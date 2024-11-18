#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
    srand(time(0));
    const int size = 20;
    int n;
    do
    {
        cout << "Podaj n: "; cin >> n;
    } while (n > 15);

    int tablica[size] = {};
    int liczba;
    int licznik = 0;
    for (int i = 0; i < 20; i++)
    {
        cout << tablica[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        do {
            cout << "Podaj " << i+1 << " liczbe: "; cin >> liczba;
            if (liczba < 0)
            {
                licznik++;
                if (licznik == 3)
                {
                    break;
                }
            }
        } while (liczba % 2 != 0 || liczba >= 100 || liczba<0);
        if (licznik == 3)
        {
            break;
        }
        tablica[i] = liczba;
    }
 
    for (int i = 0; i < 20; i++)
    {
        if (i < 19)
        {
            cout << tablica[i] << ",";
        }
        else
        {
            cout << tablica[i] << " ";
        }
    }

    for (int j = 0; j < size; j++)
    {
        if (tablica[j] == 0)
        {
            do
            {
                tablica[j] = 10 + rand() % 90;
            } while (tablica[j] % 2 != 0);
            
        }
    }
    cout << endl;
    for (int i = 0; i < 20; i++)
    {
        if (i < 19)
        {
            cout << tablica[i] << ",";
        }
        else
        {
            cout << tablica[i] << " ";
        }
    }
    cout << endl;
    int* wskKoniec = &tablica[19];

    for (int* wskPoczatek = &tablica[0]; wskPoczatek < wskKoniec; wskPoczatek++, wskKoniec--)
    {
        swap(*wskPoczatek, *wskKoniec);
    }
    for (int i = 0; i < 20; i++)
    {
        if (i < 19)
        {
            cout << tablica[i] << ",";
        }
        else
        {
            cout << tablica[i] << " ";
        }
    }
}

