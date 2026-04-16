#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()   
{
    while (true)
    {
        cout << "Masukkan Elemen pada Array (Maksimal 10) : ";
        cin >> nPanjang;

        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[i] Jumlah elemen tidak boleh lebih dari 10. Silakan coba lagi.\n";
        }
    }
}