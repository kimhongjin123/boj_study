#include <iostream>
#include<vector> 
using namespace std;
vector<int>v;
int main()
{
    int sum = 0;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        if (b != 0)
        {
            v.push_back(b);
        }
        else {
            v.pop_back();
        }
    }
    for (auto& i : v)
    {
        sum = sum + i;

    }
    cout << sum;
}

