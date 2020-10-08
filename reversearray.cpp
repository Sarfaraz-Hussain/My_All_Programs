#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(a) / sizeof(a[0]);
	std::reverse(a, a + n);
	for (auto i : a)
		cout << i << " ";
	cout << endl;
	return 0;
}