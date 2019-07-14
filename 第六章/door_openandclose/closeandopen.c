#include<stdio.h>
#include<string.h>
struct people
{
    char num[1000];
    char tim1[1000];
    char tim2[1000];
}st[1000];
int main()
{
    int t,n,i,min,max;
    printf("输入要计算的天数：\n");
    scanf("%d",&t);
    while(t--)
    {
    printf("输入签到的人数：\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%s%s",st[i].num,st[i].tim1,st[i].tim2);//输入每个人的编号和时间
        }
        min=0;
        max=0;
        for(i=0;i<n;i++)
        {
            if(strcmp(st[min].tim1,st[i].tim1)>0)//用string函数直接比较字符串大小
            min=i;
            if(strcmp(st[max].tim2,st[i].tim2)<0)
            max=i;
            }
            printf("%s %s\n",st[min].num,st[max].num);
    }
return 0;
}
