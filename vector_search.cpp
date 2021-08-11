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
	int s;
	cout << "Enter the search element :" << endl;
	cin >> s;
	vector<int>::iterator it;
	it = find(v.begin(), v.end(), s);
	if (it != v.end())
	{
		cout << "Element found and position ---  ";
		cout << it - v.begin() << endl;
	}
	else
		cout << "Element Not Found" << endl;
	cout << "Final vector" << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}
