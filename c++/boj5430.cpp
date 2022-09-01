#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
#include<sstream>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool error = 0;
		bool state = 0;
		deque<string>v;
		string rd;
		cin >> rd;
		int k;
		cin >> k;
		
		string t;
		cin >> t;
		cin.ignore();
		t= t.substr(1, t.size()-2);
			istringstream s1(t);
			string s2;
			while (getline(s1, s2, ',')) 
			{
				v.push_back(s2);
			}
			
		for (int i = 0; i < rd.size(); i++)
		{
		
			
				if (rd[i] == 'R')
				{
					state=!state;
					
					
				}
				else if (rd[i] == 'D')
				{
					if (!state)
					{
						if (!v.empty())
						{
							v.pop_front();
						}
						else
						{
							error = 1;
							break;
						}
					}
					else
					{
						if (!v.empty())
						{
							v.pop_back();
						}
						else
						{
							error = 1; 
							break;
						}
						
					}
				}
			
		}
		if (error==1)
		{
			cout << "error" << '\n';
		}
		else {
			cout << "[";
			if(!state)
			{ 
				for (int i = 0; i < v.size(); i++)
				{
					if (i == v.size() - 1)
					{
						cout << v[i];
					}
					else
					{
						cout << v[i] << ',';
					}
				}
			
			}
			else 
			{
				for (int i = v.size()-1; i >=0; i--)
				{
					if (i == 0)
					{
						cout << v[i];
					}
					else
					{
						cout << v[i] << ',';
					}
				}
				}
			cout << "]"<<'\n';
			v.clear();
		}
	}
	return 0;

}
