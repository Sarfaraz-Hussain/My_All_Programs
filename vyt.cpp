#include<stdio.h>
int f(int *p, int n)
{
if(n <= 0) return 0;
else if(*p % 2 == 0) return *p + f(p+1, n-1);
else return *p - f(p+1, n-1);
}
int main()
{
int p[] = {24, 17, 25, 8, 22, 12};
printf("%d", f(p, 6));
getchar();
return 0;
}
