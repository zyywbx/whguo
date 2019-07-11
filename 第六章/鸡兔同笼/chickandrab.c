#include <stdio.h>
void main()
{    
    int a,b,c,d;
    printf("输入总数"); 
    scanf("%d",&a); 
    if(a>=0)
    {
        printf("\n总腿数");
        scanf("%d",&b);
        if(b%2==1)
        printf("腿数不能单数\n");
        else if(b<=a*4&&b>=a*2)
        {
            c=(4*a-b)/2; 
            d=a-c;
            if(c*2+d*4==b)
            printf("鸡数:%4d\n兔数:%4d\n",c,d); 
            else
            printf("无解!\n");    
            }
        else
        printf("腿数错了正确范围:%d-%d\n",a*2,a*4);    
    }
    else
    printf("鸡数不能为负数\n");    
}