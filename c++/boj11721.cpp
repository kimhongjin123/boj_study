#include<iostream>
#include<string>

using namespace std;

int main() {
    string a;
    getline(cin, a);

    for (int i = 0; i < a.size(); i++) {
        cout << a[i];
        if ((i + 1) % 10 == 0) {
            cout << '\n';
        }
    }
    cout << '\n';
    return 0;
}
/*
#include <stdio.h>

int main()
{
	char str[100] = { 0, };
	int i;

	scanf("%s", str);

	printf("%c", str[0]); //배열의 첫 번째 요소는 무조건 출력한다.

	for (i = 1; i < strlen(str); i++)
	{
		if (i % 10 == 0) //배열 인덱스를 10으로 나눈 나머지가 0일 경우 개행문자를 출력한다.
			printf("\n");

		printf("%c", str[i]);
	}

	return 0;
}
*/