#include <stdio.h>
unsigned int func(unsigned int p, unsigned int q)
{
if (p > 0) return (p%q + func (p/q, q ));
else return 0;
}
int main()
{
printf("%u",func(1025,2));
return 0;
}
