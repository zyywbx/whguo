#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    int i = 0;
    for(i=2;i<num;i++)
    {
        if(num%i == 0)
        {
            return 0;            
        }
    }
    return 1;
}

int backnum(int num)
{
    
    int single_num[10]={0};
    int num_length;
    int i=0;
    int j=0;
    j=num;
    while(j)
    {
        single_num[i]=j%10;
        i++;
        j = j/10;
    }
    if(single_num[0]==single_num[i-1])
    {
        return 1;
    }
    return 0;
}

int main()
{
    int test_num,test_min,test_max;
    int i=0;
    int j=0;
    scanf("%d",&test_min);
    scanf("%d",&test_max);
    for(test_num=test_min;test_num<=test_max;test_num++)
    {
        if(isPrime(test_num)&&backnum(test_num))
        {
            printf("%d ",test_num);
            j++;
        }
        if(j == 10)
        {
            j=0;
            printf("\n");
        }
    }
    return 0;
}