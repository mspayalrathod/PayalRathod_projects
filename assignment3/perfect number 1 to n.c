#include<stdio.h>
int main () {
    int n, i, j, sum;
    printf("enter range:");
    scanf("%d", &n);
    printf("perfect number:\n");
    for(i=1; i<=n; i++) {
        sum=0;
        for(j=1; j<i; j++) {
            if(i%j==0)
            sum +=j;
        }
        if(sum==i)
        printf("%d", i);
    }
}