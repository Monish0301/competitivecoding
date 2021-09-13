#include <iostream>
using namespace std;
int main()
{
    char ch = cin.get();
    int digit = 0;
    int space = 0;
    int alpha = 0;
    while (ch != '\n')
    {
        if (ch >= '0' and ch <= '9')
            digit++;
        else if (ch == ' ' or ch == '\t')
            space++;
        else if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
            alpha++;
        ch = cin.get();
    }
    cout << "Digit" << digit << endl;
    cout << "Space" << space << endl;
    cout << "Alpha" << alpha << endl;
}