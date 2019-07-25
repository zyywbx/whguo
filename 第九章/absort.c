#include <stdio.h>
#include <math.h>
#include <string.h>
int num[20]={0};
int set_num_abs(int length,int *num)
{
    for(int i=0;i<length;i++)
    {
        num[i]=abs(num[i]);
    }
}
sort_num(int length,int *num)
{
    int i,j;
    int temp;
    for(i=0;i<length;i++)
    {
        for(j=0;j<length;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
}
int main()
{
    int i=0;
    int j=0;
    printf("输入数以0结尾:\n");
    for(i=0;i<20;i++)
	{
        scanf("%d",&num[i]);
        if(num[i]==0)
        {
            printf("检测到0退出\n");
            break;
        }
    }
    set_num_abs(i,num);
    sort_num(i,num);
	while(j<i)
	{
		printf("num [%d] :%d\n",j,num[j]);
		j++;
	}
}