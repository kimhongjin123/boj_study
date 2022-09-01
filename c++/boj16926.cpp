#include <iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<deque>
using namespace std;
int main()
{
	vector<deque<int>> v;
	vector<deque<int>> v2;
	stack<int>s;
	stack<int>s1;

	int x, y, r;
	cin >> x >> y >> r;

	int tmp_matrix[300][300];
	int matrix1[300][300];
	int matrix2[300][300];

	for (int i = 0; i < x; i++)
	{
		deque<int> l;
		for (int j = 0; j < y; j++)
		{
			int num;
			cin >> num;
			matrix1[j][i] = num;
			matrix2[j][i] = num;
		}
	}

	for (int a = 0; a < r; a++) {
		for (int depth = 0; depth < y / 2; depth++) {
			for (int j = depth; j < y - depth - 1; j++) {
				matrix2[j + 1][depth] = matrix1[j][depth];
			}

			for (int i = depth; i < x - depth - 1; i++) {
				matrix2[y - depth - 1][i + 1] = matrix1[y - depth - 1][i];
			}

			for (int j = depth; j < y - depth - 1; j++) {
				matrix2[y - j - 1][x - 1 - depth] = matrix1[y - j - 2][x - 1 - depth];
			}

			for (int i = depth; i < x - depth - 1; i++) {
				matrix2[depth][x - 1 - i] = matrix1[depth][x - 2 - i];
			}
		}

		for (int i_y = 0; i_y < y; i_y++) {
			for (int i_x = 0; i_x < x; i_x++) {
				matrix1[i_y][i_x] = matrix2[i_y][i_x];
			}
		}
	}

	for (int i_y = 0; i_y < y; i_y++) {
		for (int i_x = 0; i_x < x; i_x++) {
			cout << matrix1[i_y][i_x];
		}
		cout << endl;
	}
	return 0;

}
