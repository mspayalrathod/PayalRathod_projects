#include <stdio.h>
int main() {
    int n,i,j,count;
    printf("enter range:");
    scanf("%d", &n);
    printf("Prime numbers\n");
    for(i=2; i <= n; i++) {
        count=0;
        for(j=1; j<= i; j++) {
            if(i% j==0)
            count++;
        }
        if(count ==2)
        printf("%d", i);
    }
    
    
    


}