#include<iostream>
#include <algorithm>
using namespace std;

bool compare(double a, double b)
{
	return (a < b);
}

int main()
{
	double mydoubles[] = {3.14, 1.41, 2.72, 4.67, 1.73, 1.32, 1.62, 2.58};
	int n = sizeof(mydoubles) / sizeof(mydoubles[0]);
	stable_sort(mydoubles, mydoubles + n, compare);
	for (const auto e : mydoubles)
		cout << e << " ";
	cout << endl;
	return 0;
}