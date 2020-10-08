#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Maxones(int a[], int n)
{
	std::vector<int> v;
	int count = 0;
	int j;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 1)
		{
			j = i + 1;
			count++;
			while (a[j] == 1)
			{
				count++;
				j++;
			}
			v.push_back(count);
			count = 0;

		}
		i = j;
	}

	// int ans = max(v.begin(), v.end());
	int ans = *max_element(v.begin(), v.end());
	return ans;
}

int main()
{
	int a[] = {0, 1, 1, 1, 0, 1, 0};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = Maxones(a, n);
	cout << "the max consecutive 1's:" << ans << endl;
	return 0;
}