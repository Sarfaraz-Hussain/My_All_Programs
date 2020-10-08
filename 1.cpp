#include<iostream>
using namespace std;

int deletefromarray(int a[],int pos,int n)
{
	if(n==0)
	return n;
	int idx=pos-1;
	int i;
	for( i=idx;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	return i;
}

int main()
{
	int a[]={1,2,6,2,7};
	int n=sizeof(a)/sizeof(a[0]);
	int pos;
	cin>>pos;
	n=deletefromarray(a,pos,n);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
