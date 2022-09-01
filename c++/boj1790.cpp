#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    long j = 0;
    string answer = "-1";
    cin >> n >> k;
    string sum;
    for (int i = 1; i <= n; i++)
    {
        string a = to_string(i);
        long n_j = j + a.size();
        if (k <= n_j) {
            int pos = n_j - k + 1;
            answer = a[a.size() - pos];
            break;
        }
        j = n_j;
    }
    if (answer == "-1")
    {
        cout << -1;
    }
    else
    {
        cout << answer << endl;
    }
}

