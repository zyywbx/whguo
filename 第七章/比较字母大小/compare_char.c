#include <stdio.h>

int main()
{
    int T=0;
    char let[2];
    printf("输入要比较的大小的两个字母：");
    scanf("%c",&let[0]);
    scanf("%c",&let[1]);
    printf("比较大的字母:");
    printf("%c\n",let[0]>let[1]?let[0]:let[1]);
    let[0]='0';
    let[1]='0';
    }
}