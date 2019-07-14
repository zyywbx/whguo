#include <stdio.h>
#include <math.h>
int isPrime(int n)//判断素数函数。
{
    int i;
    for(i = 2; i <= (int)sqrt(n); i ++)//从2到算数平方根遍历。
        if(n%i == 0) return 0;//存在约数，非素数，返回0.
    return 1;//是素数，返回1.
}
int main()
{
    int i;
    for(i = 2; i <= 100; i ++)//遍历。
        if(isPrime(i))//是素数。
            printf("%d ", i);//输出素数。
    return 0;
}