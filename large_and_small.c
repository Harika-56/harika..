#include <stdio.h>
int main() 
{
	int a[10],i,large,small,n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
        scanf("%d",&a[i]);
	large=a[0];
	small=a[0];
	for(i=1;i<n;i++)
	{
	    if(a[i]>large)
            large=a[i];
            if(a[i]<small)
	    small=a[i];
	}
	printf("\nlargest element:%d",large);
	printf("\nsmallest element:%d",small);
}
