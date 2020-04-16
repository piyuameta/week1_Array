#include<stdio.h>
void main()
{
	int n,i,j,c,count=0,t;
	int a[100],f[100],d[100];
	printf("Enter size of array :\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(t=j;t<n;t++)
				{
					a[t]=a[t+1];
				}
				count++;
			}
		}
		f[i]=count;
		d[i]=a[i];	
	}
	for(i=0;f[i]!=0;i++)
	{
		if(f[0]>f[i])
		{
			c=i;
			f[0]=f[i];
		}
	}
	printf("number with highest frequency is %d", a[c]);
}
