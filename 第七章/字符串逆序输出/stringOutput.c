#include <stdio.h>

int main()
{
    char str[50];
    int i = 0;
    int len = 0;
    printf("输入一个字符串：");
    scanf("%s", str);
    while(str[i++]!='\0')
    {
        len++;
    }
    printf("%s\n",str);
    printf("%d\n",len);
    printf("逆序的字符串：");
    while(len>=0)
    {
        if(str[len]>'A'&&str[len]<'z')
        printf("%c",str[len]);
        len--;
    }
    printf("\n");
}