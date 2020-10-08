#include <iostream>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;

int Majority(int a[], int n)
{
	set<int> s(a, a + n);
	for (int i = 0; i < s.size(); i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (s.at(i) == a[j])
				count++;
		}
		if (count > n / 2);
		return s.at(i);
	}
	return -1;
}

int main()
{
	int a[] = {8, 3, 4, 8, 8};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = Majority(a, n);
	cout << "Majority elements is:" << ans << endl;
	return 0;
}