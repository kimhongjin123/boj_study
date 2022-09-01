
#include <iostream>
using namespace std;

int main()
{
	int pay = 0;
	cin >> pay;
	int cash = 1000 - pay;
	int money_num = 0;

	if (cash / 500 > 0)
	{

		money_num += cash / 500;
		cash = cash % 500;
	}

	if (cash / 100 > 0)
	{

		money_num += cash / 100;
		cash = cash % 100;
	}

	if (cash / 50 > 0)
	{

		money_num += cash / 50;
		cash = cash % 50;
	}


	if (cash / 10 > 0)
	{

		money_num += cash / 10;
		cash = cash % 10;
	}

	if (cash / 5 > 0)
	{

		money_num += cash / 5;
		cash = cash % 5;
	}
	if (cash / 1 > 0)
	{	
		money_num += cash;
		cash = cash % 1;	
	}

	cout << money_num;


}
