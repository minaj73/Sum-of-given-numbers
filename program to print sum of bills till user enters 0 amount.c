#include<stdio.h>
#include<conio.h>
int main()
{
    int bill=0,sum=0,count=1;
    printf("\n enter bill to calculate total ");

    while(1)
    {
        printf("\n enter bill amount %d =",count);
        scanf("%d",&bill);
        if(bill<=0)
        {
            break;
        }
        sum=sum+bill;
        count++;
    }
    printf("\n total=%d",sum);
    getch();
    return 0;
}
