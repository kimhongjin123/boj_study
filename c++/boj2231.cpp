
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int min = 1000000;
	int answer = 1000000;
	for (int i = 1; i <= num; i++)
	{
		string b = to_string(i);
		int sum = 0;
		for (int j = 0; j < b.length(); j++)
		{
			sum += b[j]- '0';
		}
		if (sum + i == num)
		{
			answer = i;
		}
		
		min = min < answer ? min : answer;
		
		
	}
	if (answer == 1000000)
	{
		min = 0;
	}
	cout << min << endl;
	
}

