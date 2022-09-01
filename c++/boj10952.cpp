
#include <iostream>
#include <queue>
using namespace std;
int main()
{
	queue<int> v;
	bool t = true;

		while (t)
		{
			int num;
			int num2;
			cin >> num >> num2;
			
			

			if (num == 0 && num2 == 0)
			{
				t = false;
			}
			else
			{
				v.push(num + num2);
			}
		}
		
	while (!v.empty())
	{
		cout << v.front()<<endl;
		v.pop();
	}


	
}
