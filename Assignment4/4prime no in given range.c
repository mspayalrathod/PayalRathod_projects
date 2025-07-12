#include<stdio.h>
int main()
{
    int first, last, count =0;
    scanf("%d", &first);
    scanf("%d", &last);
    
    for (int j=first;j<=last;j++){
        count=0;
        for(int j=first;j<=last;j++) {
            count=0;
            for(int i=1;i<=j;i++)
            {
                if(j%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d",j);
        }
    }
    }
}