#include <iostream>
using namespace std;
int powerfind(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return a * powerfind(a, n - 1);
}
int main()
{
    int a, n;
    cin >> a >> n;
    cout << powerfind(a, n);
    return 0;
}