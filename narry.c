#include<stdio.h>
int k;
change(int a[100],int i,int r,int n)
{
	int j;
	a[i]=r;
	if(i<=(n-2)/k+1)
	for(j=i;j>=1;j--)
	maxheap(a,j,n);	
}
maxheap(int a[100],int i,int n){
	int j,t,largest;
	largest=i;
	j=1,t=k*i-(k-2);
	while(t<=n&&j<=k)
	{
		if(a[largest]<a[t])
		largest=t;
		t++;
	}
		if(i!=largest){
			int temp;
			temp=a[i];
			a[i]=a[largest];
			a[largest]=temp;
				maxheap(a,largest,n);
		}
}
build_maxheap(int a[100],int n){
	int i;
	for(i=(n-2)/k+1;i>=1;i--){
		maxheap(a,i,n);
	}
}
extract(int a[100],int n){
	int max;
	while(n!=0){
	max=a[1];
	a[1]=a[n];
	n--;
	printf("%d ",max); 
	maxheap(a,1,n);}
}
int main(void){
	int n;
	scanf("%d",&k);
	scanf("%d",&n);
	int i,a[100];
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	build_maxheap(a,n);
	printf("\nenter which index you want to replace\n");
	int r,m;
	scanf("%d%d",&r,&m);
	change(a,r,m,n);
	extract(a,n);
//	for(i=1;i<=n;i++){
//		printf("%d ",a[i]);
		//printf("\n");
	
	return 0;
}
