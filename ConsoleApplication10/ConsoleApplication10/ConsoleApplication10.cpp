#include <iostream>
using namespace std;

int main()
{
    int m, n;
    char alphabet[30];
    m = 0;

    cout << "Enter the string: ";
    cin >> alphabet;

    for (m; m < strlen(alphabet) - 1; m++) {
        for (n = m; n < strlen(alphabet) - 1; n++) {
            if (alphabet[m] > alphabet[n + 1])
            {
                swap(alphabet[m], alphabet[n + 1]);
            }
        }
    }
    cout << alphabet;
}
