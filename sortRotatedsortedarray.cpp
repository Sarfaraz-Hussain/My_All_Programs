#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[] = {3, 4, 5, 1, 2};
	int n = sizeof(a) / sizeof(a[0]);
	auto it = min_element(a, a + n);
	int key;
	cout << "Enter the key which you want to Search:";
	cin >> key;
	if (binary_search(a, it, key))
	{
		auto low = std::lower_bound(a, it, key);
		cout << "The number is found at Index:";
		cout << (low - a) << "\n";
	}
	else if (binary_search(it, a + n, key))
	{
		auto low = std::lower_bound(it, a + n, key);
		cout << "The number is found at Index:";
		cout << (low - a) << endl;
	}
	else
	{
		cout << "The element is not present\n";
	}
	return 0;

}