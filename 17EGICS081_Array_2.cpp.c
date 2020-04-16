#include<stdio.h>
void main()
{
	int n,i,m,s=0,sum=0;
	int a[100];
	printf("enter size of array: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	m=n/2;
	for(i=0;i<m;i++)
	{
		s=s+a[i];
	}
	for(i=m;i<=n;i++)
	{
		sum+=a[i];
	}
	if(s<sum)
	{
		printf("The sum is %d",s);
	}
	else
	{
		printf("The sum is %d",sum);
	}
}
