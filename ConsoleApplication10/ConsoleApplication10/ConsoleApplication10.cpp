#include <iostream>
using namespace std;

int main()
{
    int m, n;
    char s[30];
    m = 0;

    cout << "Enter the string: ";
    cin >> s;

    for (m; m < strlen(s) - 1; m++) {
        for (n = m; n < strlen(s) - 1; n++) {
            if (s[m] > s[n + 1])
            {
                swap(s[m], s[n + 1]);
            }
        }
    }
    cout << s;
}
