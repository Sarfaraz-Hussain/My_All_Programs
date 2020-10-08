#include <iostream>
using namespace std;

void solution(int n)
{
	if (n <= 1)
		return;
	bool isprime[n + 1];
	fill(isprime, isprime + n + 1, true);
	for (int i = 2; i * i <= n; i++) {
		if (isprime[i]) {
			int j = i;
			for (j = 2 * j; j <= n; j = j + i)
				isprime[j] = false;
		}
	}
	for (int i = 2; i < n; i++)
		if (isprime[i])
			cout << i << " ";
	cout << endl;

}

int main()
{
	int n;
	cin >> n;
	solution(n);
	return 0;
}
