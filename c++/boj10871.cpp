#include <iostream>
using namespace std;
int main()
{
    int num,b;

    cin >> num >> b;
    for (int i = 0; i < num; i++)
    {

        int input;
        cin >> input;
        if (input < b)
        {
            cout << input<<" ";
        }
        
        
    }
}

