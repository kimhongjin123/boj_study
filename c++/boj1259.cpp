

#include <iostream>
#include <string>
using namespace std;
int main()
{
	while (1)
	{
		int a;
		cin >> a;
		if (a == 0)
		{
			break;
		}
		else {
			string b = to_string(a);
			bool yesno = true;
			for (int i = 0; i <3; i++)
			{
				if (b[i] != b[b.length() - i - 1])
				{
					yesno = false;	
				}
			}
			if (yesno == false)
			{
				cout << "no"<<endl;
			}
			else
			{
				cout << "yes"<<endl;
			}
		}
	}
   
}
