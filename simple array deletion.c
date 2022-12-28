#include<stdio.h>
void main()
{
	int item,pos,i,n;
	int a[i];
	printf("enter the size of the array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position of the element that needs to be deleted\n");
	scanf("%d",&pos);
	item=a[pos];
	a[pos]=0;
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	printf("\ndeletion performed successfully!!");
	printf("the array after deletion of an element is....\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
