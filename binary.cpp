#include <iostream>
using namespace std; 

int element [10]
int nPanjang;
int x;

int main()
{
}

void input()
{
    while (true)
    {
        cout << "Masukkan banyaknya array (maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang <= 10)
            break;
        else
            cout << "Jumlah tidak boleh lebih dari 10\n";
    }

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> element[i];
    }
}