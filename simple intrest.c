#include <stdio.h>
int main()
{
    int x,y,z,si;
    printf("enter the amount ");
    scanf("%d",&x);
    printf("enter the time ");
    scanf("%d",&y);
    printf("enter the rate of intrest ");
    scanf("%d",&z);
    si=(x*y*z)/100;
    printf("the simple intrest is %d", si);
}
