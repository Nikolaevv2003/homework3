#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");

    ifstream F;
    F.open("file1.txt");
    if (F)
        cout << F.rdbuf();
    else
        cout << "error" << endl;

    cin.get();
    return 0;
}