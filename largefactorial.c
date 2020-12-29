#include<stdio.h>
int mul(int x,int a[],int l)
{
	int carry=0,i,tp;
	for(i=0;i<l;i++)
	{
		tp=a[i]*x+carry;
		a[i]= tp % 10;
		carry=tp/10;
	}
	while(carry)
	{
		a[l]=carry%10;
		carry=carry/10;
		l++;
	}
	return l;
}
void fact(int n)
{
	int a[100000];
	int l,x;
	a[0]=1;
	l=1;
	for(x=2;x<=n;x++)
		l=mul(x,a,l);
	for(x=(l-1);x>=0;x--)
		printf("%d",a[x]);
}
int main()
{
	int n;
	scanf("%d",&n);
	fact(n);
	return 0;
}
