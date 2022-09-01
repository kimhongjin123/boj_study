#include <iostream>
#include <vector>
using namespace std;
int main()
{
	char arr[50][50];
	char arr_new[8][8];
	int x, y;
	int B_count = 0;
	int W_count = 0;
	cin >> x >> y;
	for(int i=0;i<x;i++)
	{
		for (int j = 0; j < y; j++)
		{
			char s;
			cin >> s;
			arr[i][j] = s;
		}

	}
	
	for (int dx=0; dx <= x-8; dx++)
	{
		for (int dy = 0; dy <= y - 8; dy++)
		{
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					int nx = dx + i;
					int ny = dy + j;
					
				}
			}
		}
	
	}


	
}
