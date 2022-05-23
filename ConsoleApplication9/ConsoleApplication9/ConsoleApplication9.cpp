#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string path = "file2.txt";
    ofstream fout;

    int Number;

    fout.open(path);


    if (!fout.is_open()) {
        cout << "Error";
    }

    else {
        fout << 73463254 << "qwewrtydfsgvhj" << 462 << endl;
    }

    ifstream file(path);


    do {
        if (file >> Number) {
            cout << Number;
        }
        else {
            file.clear();
            file.ignore(1, ' ');
        }
    } 
    while (!file.eof());
    fout.close();
}
