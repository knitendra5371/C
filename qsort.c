#include<stdio.h>
void qsort(int a[],int l,int h)
{
	int temp,pivot,low,high;
	low=l;
	high=h;
	pivot=a[(low+high)/2];
	do
	{
		while(pivot>a[low])
			low++;
		while(pivot<a[high])
			high--;
		if(low<=high)
		{
			temp=a[low];
			a[low++]=a[high];
			a[high--]=temp;
		}
	}while(low<=high);
	if(l<high)
		qsort(a,l,high);
	if(low<h)
		qsort(a,low,h);
}
int main()
{
	int n,i,j,temp;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		qsort(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
		return 0;
}
