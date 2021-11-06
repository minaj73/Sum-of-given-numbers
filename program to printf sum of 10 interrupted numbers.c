#include<stdio.h>
#include<conio.h>
int main()
{
  int no=0,sum=0,count=0;
  printf("\n enter 10 numbers =");


  while(count<10)
  {
      scanf("%d",&no);

      sum=sum+no;
      count++;
  }
  printf("\n sum of given 10 numbers = %d",sum);
  getch();
  return 0;
}
