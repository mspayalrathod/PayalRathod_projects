#include<stdio.h>
int main(){
    int first, last, n, temp, r, sum, fact, i;
    scanf("%d%d", &first, &last);
    for(n=first; n<= last; n++)
    {
        temp= n;
        sum=0;
        while (temp !=0)
        {
            r=temp%10;
            fact=1;
            for(i=1; i <= r; i++)
            fact *= i;
            sum += fact;
            temp /=10;
        }
        if (sum == n)
        printf("%d",n);
    }
}