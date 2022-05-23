#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string path = "file.txt";
    ofstream fout;

    fout.open(path);


    if (!fout.is_open()) {
        cout << "Error";
    }
    
    else {
        fout << "Text";
    }

    fout.close();
}
