#include<stdio.h>
int main () {
    int n, i, temp, sum,r;
    printf("enter range: ");
    scanf("%d", &n);
    printf("Armstrong nubers from 1 to are :\n");
    for(i=1; i<= n; i++) {
        temp=i;
        sum=0;
        while (temp >0) {
            r=temp %10;
            sum += r*r*r;
            temp/=10;
        }
        if(sum == i)
        printf("%d", i);
    }
}