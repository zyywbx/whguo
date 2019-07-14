#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[100];
    while(scanf("%s",str)!=EOF)
    {
        int count1,count2;
        int length=strlen(str);
        char s=0;
        for (count1=0;count1<length;count1++)
         for(count2=count1;count2<length;count2++)
          if (str[count1]>str[count2])
          {
              s=str[count1];
              str[count1]=str[count2];
              str[count2]=s;
          } 
        printf("%s\n",str);
    }
    return 0;
} 