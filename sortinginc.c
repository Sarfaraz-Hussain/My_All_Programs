#include <stdio.h>
#include<stdlib.h>

int values[] = {11, 20, 34, 65, 78, 43, 21, 78};
int n = sizeof(values) / sizeof(values[0]);

int compare(const void* a, const void* b)
{
	return (*(int*)a < * (int*)b);
}

int main()
{
	int i;
	qsort(values, n, sizeof(int), compare);
	for (i = 0; i < n; i++)
		printf("%d ", values[i] );
	printf("\n");
	return 0;
}