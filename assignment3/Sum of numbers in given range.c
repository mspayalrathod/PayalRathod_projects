#include <stdio.h>
int main () {
    int start, end, sum=0, i;
    printf("enter start and end:");
    scanf("%d%d", &start, &end);
    for(i=start; i<=end; i++){
        sum+=i;
    }
    printf("sum+%d\n", sum);
}