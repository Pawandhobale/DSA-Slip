// sort the aaray using insertion sort

#include<stdio.h>
void accp(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void dis(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		
	}
}
void insertion(int a[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=a[i];
		for(j=i-1;j>0;j--)
		{
			if(key<a[j])
			a[j+1]=a[j];
		    else
			break;
						
		}
		a[j+1]=key;
	}
	
}
int main()
{
	int a[20],i,n;
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the aaray element");
	accp(a,n);
	insertion(a,n);
	printf("sorted array is==  ");
	dis(a,n);
	return 0;
}
