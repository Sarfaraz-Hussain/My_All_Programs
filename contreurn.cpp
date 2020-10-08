#include <iostream>
#include <unordered_set>
using namespace std;


int countDistinct(int a[], int n)
{
	unordered_set<int> s;
	for (int i = 0; i < n; ++i)
	{
		s.insert(a[i]);
	}
	return s.size();
}

int main()
{
	int a[] = {3, 3, 3, 4, 5, 6};
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Distinct elements are:" << countDistinct(a, n) << endl;
	return 0;
}