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
    int d;
    cout << "Enter delete element :" << endl;
    cin >> d;
    remove(v.begin(), v.end(), d);
    cout << "Final vector" << endl;
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}