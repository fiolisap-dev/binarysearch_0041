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

void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for (int j = 0; j <= nPanjang - 1 - pass; j++)
        {
            if (element[j] > element[j + 1])
            {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass++;
    } while (pass < nPanjang - 1);
}

void display()
{
    cout << "\nHasil sorting: ";
    for (int i = 0; i < nPanjang; i++)
    {
        cout << element[i] << " ";
    }
    cout << endl;
}

void binarySearch()
{
    int low = 0, high = nPanjang - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (element[mid] == x)
        {
            cout << "Data ditemukan di indeks " << mid << endl;
            return;
        }
        else if (x < element[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << "Data tidak ditemukan\n";
}

int main()
{
    input();
    bubbleSortArray();
    display();
    binarySearch();
}
int main()
{
    input();
    bubbleSortArray();
    display();

    cout << "\nMasukkan angka yang dicari: ";
    cin >> x;

    binarySearch();
}

cout << "\n=== PROGRAM SORTING & SEARCHING ===\n";

cout << "Data tidak ditemukan dalam array\n";