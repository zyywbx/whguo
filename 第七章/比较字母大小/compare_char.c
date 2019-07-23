#include <stdio.h>

int main()
{
    int T=0;
    char let[2];
    scanf("%d",&T);
    while(T)
    {
    printf("输入要比较的大小的两个字母：\n");
    scanf("%c %c",&let[0],&let[1]);
    printf("比较大的字母:");
    if(let[0]>let[1])
    {
        printf("%c",let[0]);
    }else
    {
        printf("%c",let[1]);
    }
    let[0]='0';
    let[1]='0';
    }
}