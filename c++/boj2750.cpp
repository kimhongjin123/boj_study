
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int main()
{
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);

	}
	sort(v.begin(), v.end());
	for (auto& i : v)
	{
		cout << i << endl;

	}
}