#include <iostream>
#include "LinearAND.h"

using namespace std;

void LinearAND::linearw() {
    cin.get();
    char BigStringA[8];
    char BigStringB[8];
    char BigStringC[8];

    for (int i = 0; i < 8; i++)
    {
        BigStringA[i] = '0';
        BigStringB[i] = '0';
        BigStringC[i] = '0';
    }
   
    cout << "Enter string A: ";
    cin.getline(BigStringA, 8);

    cout << "You Input: ";
    for (int i = 0; i < 8; i++)
    {
        cout << BigStringA[i];
    }
    cout << " Right?" << endl;

    cout << "Enter string B: ";
    cin.getline(BigStringB, 8);

    cout << "You Input: ";
    for (int i = 0; i < 8; i++)
    {
        cout << BigStringB[i];
    }
    cout << " Right?" << endl;

    for (int i = 0; i < 8; i++)
    {
        BigStringC[i] = (BigStringA[i] == '1' && BigStringB[i] == '1') ? '1' : '0';
    }

    cout << "Result: ";
    for (int i = 0; i < 8; i++)
    {
        cout << BigStringC[i];
    }
    cout << endl;
    system("pause");
}