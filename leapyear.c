#include <stdio.h>
int main()
{
    int yr=2003;
    if(yr%4==0 && yr%100!=0 || yr%400==0)
    {
        printf("is leap yr");
    }
    else{
        printf("not leap yr");
    }
}