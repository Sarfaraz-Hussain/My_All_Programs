#include <iostream>
using namespace std;

void oddappaear(int a[], int n)
{
	int Xor = 0, res1 = 0, res2 = 0;
	for (int i = 0; i < n; i++)
	{
		Xor = Xor ^ a[i];
	}
	int sn = Xor & ~(Xor - 1); //rightmost set bit

	for (int i = 0; i < n; i++)
		if ((sn & a[i] ) != 0)
			res1 = res1 ^ a[i];
		else
			res2 = res2 ^ a[i];
	cout << res1 << "\n" << res2 << endl;
}

int main()
{
	int a[] = {3, 4, 3, 4, 8, 4, 4, 32, 7, 7};
	int size = sizeof(a) / sizeof(a[0]);
	oddappaear(a, size);
	return 0;
}