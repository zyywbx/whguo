
#include<stdio.h>
void main()
{
	int n,i,j,k,t,a[1000],m=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=1;i<=n;i++)
	{
		t=0;
		for(j=1;j<=k;j++)
		{
			if(i%j==0)
				t++;
		}
		if(t%2==1)
		{
			a[m]=i;
			m++;
		}
	}
	for(i=0;i<m-1;i++)
		printf("%d ",a[i]);
	printf("%d\n",a[i]);
}
