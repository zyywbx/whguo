#include <stdio.h>
int main()
{
    int i,j,k,n = 0;
    int a[100][100] = {0,1};
    while(n < 1 || n >100)
    {
    printf("请输入要打印的杨辉三角行数>:");
    scanf("%d",&n);
    }
    n+=1;
    for(i = 1; i < n; i++ )
    {
    for(j = 1; j <= i; j++){
        a[i][j] = a[i-1][j-1]+a[i-1][j];}
        }
        for(i = 1; i < n; i++)
        {
            for(k=1;k<=n-i;k++)
            {printf("  ");}
            for(j = 1; j <= i; j++)
            printf("%4d",a[i][j]);
            printf("\n");
            }
    return 0;
}
