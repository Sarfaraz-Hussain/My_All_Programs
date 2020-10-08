#include <iostream>
#include<algorithm>
using namespace std;
struct point
{
	int x;
	int y;
};

bool mycom(point p1, point p2)
{
	return (p1.y < p2.y);
}

int main()
{
	point a[] = {{3, 2}, {5, 4}, {7, 5}, {1, 6}};
	int size = sizeof(a) / sizeof(a[0]);
	sort(a, a + size, mycom);
	for (auto e : a)
		cout << "{" << e.x << "," << e.y << "}" << " ";
	cout << endl;
	return 0;
}