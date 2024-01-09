#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int ile;

    cout << "Podaj ile elementow tablicy" << endl;  cin >> ile;
    int tab[ile];
    system("cls");

    for (int i = 0; i <ile; i++)
    {
        cout << "Podaj " << i+1 << " element tablicy." << endl; cin >> tab[i];
        system("cls");
    }

    for (int i = 0; i <ile; i++)
    {
        cout << i+1 << ". element tablicy to:" << tab[i] << endl;
    }

    return 0;
}
