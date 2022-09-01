

#include <iostream>
using namespace std;
int main()
{
	int arr[1001];
	int k;
	int max = 0;
	float sum = 0;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int a;
		cin >> a;
		arr[i] = a;
		max = a > max ? a : max;
	}
	
	for (int i = 0; i < k; i++)
	{
		sum +=(float) arr[i] /max * 100;
	}
	
	cout << sum /k << endl;
	
}
