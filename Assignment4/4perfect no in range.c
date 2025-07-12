#include <stdio.h>
int main()
{
    int first, last, n, i, sum;
    scanf("%d%d" , &first, &last);
    for (n= first; n <= last; n++)
    {
        sum=0;
        for(i=1;i<n; i++){
            if (n%i==0)
            sum +=i;
        }
        if(sum==n)
        printf("%d", n);
    }
}