#include <stdio.h>

int find_min(int *data,int length)
{
    if(data==NULL)
    {
        return 0;
    }
    int i,j,min,temp;
    min=data[0];
    temp=0;
    for(i=0;i<length;i++)
    {
        if(min>data[i])
        {
            min=data[i];
        }
    }
    return min;
}
int main()
{
    int data[100]={0};
    int length=0;
    int i,j,k;
    i=0,j=0,k=0;
    while(length<100)
    {
        scanf("%d",&data[length]);
        
        if(data[length]==0)
        {
            printf("input 0 so break\n");
            break;
        }
        length++;
    }
    while(i<length)
    {
        printf("%d ",data[i]);
        i++;
    }
    printf("\n");
    int min=find_min(data,length);
    while(k<length)
    {
        if(data[k]==min)
        {break;}
        k++;
    }
    int temp=data[k];
    data[k]=data[0];
    data[0]=temp;
    while(j<length)
    {
        printf("%d ",data[j]);
        j++;
    }
    printf("\n");
    return 0;
}