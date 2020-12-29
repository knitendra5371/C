#include<stdio.h>
void merge(int a[],int temp[],int low,int mid,int high)
{
	int lw1,lw2,up1,up2,pos=low,i;
	lw1=low;
	lw2=mid+1;
	up1=mid;
	up2=high;
	while(lw1<=mid && lw2<=high)
	{
		if(a[lw1]<=a[lw2])
		    temp[pos++]=a[lw1++];
		else
			temp[pos++]=a[lw2++];
	}
	while(lw1<=mid)
		temp[pos++]=a[lw1++];
	while(lw2<=high)
		temp[pos++]=a[lw2++];
	for(i=0;i<=high;i++)
		a[i]=temp[i];
}
void msort(int a[],int temp[],int low,int high)
{
	int mid;
	if(high>low)
	{
		mid=(low+high)/2;
		msort(a,temp,low,mid);
		msort(a,temp,mid+1,high);
		merge(a,temp,low,mid,high);
	}
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int temp[n];
		msort(a,temp,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
