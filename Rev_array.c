#include<stdio.h>
int main()
{
	int a[5],b[5],i,c=0;
	printf("Enter 5 numbers : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array in original : ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		b[c++]=a[i];
	}
	for(i=0;i<5;i++)
	{
		a[i]=b[--c];
	}
	printf("\nArray in reverse order:  ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
