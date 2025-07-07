#include <stdio.h>
int main() {
    int n, i, temp, r, sum, fact, j;
    printf("enter range :");
    scanf("%d", &n);
    printf("stromg number:\n");
    for(i =1; i <=n; i++) {
        temp=i;
        sum=0;
        while (temp >0){
            r=temp % 10;
            fact=1;
            for(j=1; j<= r; j++)
            fact *=j;
            sum+=fact;
            temp/=10;
        }
        if (sum == i)
        printf("%d" , i);
    }
}