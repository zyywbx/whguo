#include <stdio.h>

int main()
{
	int i,j;
	i=0;j=0;
	int product=0;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			product = i*j;
			printf(" %d * %d",i,j);
			printf("= %d",product);
		}
		printf("\n");
	}
}