#include <iostream>
#include "LinearAND.h"

using namespace std;

int main(int argc, char** argv) {
    cout << "Enter number work for select: " << endl;
    cout << "1. Linear AND" << endl << endl;
    cout << "Enter number work: ";
    char i = 0;
    cin.get(i);
    if (i == '1')
        cout << "\033[31m" << endl << "Linear AND" << endl << "\033[0m" << endl;
        LinearAND::linearw();
    return 0;
}