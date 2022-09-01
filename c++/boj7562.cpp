#include <iostream>
#include<queue>
#include<vector>
#include<utility>
#include <cstring>
using namespace std;
int main()

{
	vector<vector<int>> v;
	queue<pair<int, int>>q;

	int k = 0;
	const int move_x[8] = { 1,2,2,1,-1,-2,-2,-1 }; //이동 방향
	const int move_y[8] = { 2,1,-1,-2,-2,-1,1,2 };
	cin >> k;
	int start_x = 0;
	int	start_y = 0;
	int end_x = 0;
	int end_y = 0;
	for (int i = 0; i < k; i++)
	{


		int a = 0; //체스판의 격자
		cin >> a;
		cin >> start_x >> start_y;
		cin >> end_x >> end_y;
		pair<int, int> test = make_pair(start_x, start_y);
		for (int i = 0; i < a; i++)
		{
			vector<int> v1;
			for (int i = 0; i < a; i++)
			{

				v1.push_back(1000000);


			}

			v.push_back(v1);

		}
		int check[301][301] = { 0, };
		v[start_x][start_y] = 0;
		q.push(test);
		check[start_x][start_y] = 0;


		while (!q.empty())
		{
			test = q.front();
			int now_x = test.first;
			int now_y = test.second;
			q.pop();


			for (int i = 0; i < 8; i++)
			{
				int next_x = now_x + move_x[i];
				int next_y = now_y + move_y[i];



				if (next_x >= 0 && next_x < a && next_y >= 0 && next_y < a && check[next_x][next_y] != 1)
				{
					if (v[next_x][next_y] > v[test.first][test.second])
					{
						test = make_pair(next_x, next_y);
						q.push(test);
						v[next_x][next_y] = v[now_x][now_y] + 1;
						check[next_x][next_y] = 1;
					}
				}

			}

		}
		cout << v[end_x][end_y] << endl;
		v.clear();
		memset(check, 0, sizeof(check));
	}
	return 0;
}
