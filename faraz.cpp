#include <iostream>
using namespace std;

int fact(long n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * fact(n - 1);
}

void solution(int n)
{
	int flag = 1;
	int res = 0;
	int temp;
	for (int i = 1; i <= n; i++)
	{
		temp = i;
		res = 0;
		while (temp != 0)
		{
			int r = temp % 10;
			res = res + fact(r);
			temp = temp / 10;
		}
		if (res == i)
			cout << i << endl;
		else
		{
			if (flag) {
				cout << "Not strong numbers are" << endl;
				cout << i << endl;
				flag = 0;
			}
			else
				cout << i << endl;
		}
	}
}


int main()
{
	int n;
	cout << "Enter limit ";
	cin >> n;
	cout << "strongs numbers are" << endl;
	solution(n);
	return 0;
}