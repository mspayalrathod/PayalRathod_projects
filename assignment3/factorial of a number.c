#include<stdio.h>
int main(){
    int n, i, fact =1;
    printf("enter number:");
    scanf("%d", &n);
    for(i=1; i <=n; i++){
        fact *=i;
    }
    printf("factorial = %d\n", fact);
}