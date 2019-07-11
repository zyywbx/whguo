#include <stdio.h>

int main()
{
    char str_1[5],str_2[80];
    int num=0;
    int i,j,k;
    scanf("%s",str_1);
    scanf("%s",str_2);
    printf("开始统计:\n");
    for(i =0;i<sizeof(str_1);i++)
    {
        for(j=0;j<sizeof(str_2);j++)
        {
            if(str_1[i]==str_2[j])
            num++;
        }
        printf("%c is %d\n",str_1[i],num);
        num = 0;
    }
}