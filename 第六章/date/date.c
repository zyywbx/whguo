#include <stdio.h>
int  DayofYear(int year, int month, int day) 
{
 int i,mm,days=0;
 int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  if((year%4==0 && year%100!=0) || (year%400==0))
  {
    mm=1;
  } 
  else
  {
    mm=0;
  }  
  if(mm==1)
  {
    a[1]=29;
  }
  for(i=month-2;i>=0;i--)
  {
    day=a[i];
    days+=day;
  }
    return days;
  }

int main()
{
  int year,month,day;
  printf("Please enter year, month, day:");
  scanf("%d,%d,%d",&year,&month,&day);
  day=day+DayofYear(year,month,day);
  printf("yearDay = %d\n",day);
  return 0;
}
