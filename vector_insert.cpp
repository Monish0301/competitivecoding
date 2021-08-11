#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size : " << endl;
    cin >> n;
    cout << "Enter the elements one by one :" << endl;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    int a, b;
    cout << "Enter insert position :" << endl;
    cin >> b;
    cout << "Enter insert element :" << endl;
    cin >> a;
    v.insert(v.begin() + b, a);
    cout << "Final vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}