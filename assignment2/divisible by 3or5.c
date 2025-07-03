#include<stdio.h>
intmain(){
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    if(num%3==0){
        if(num%5==0){
            printf("divisible by both\n");
        }else{
            printf("divisible by 3but not 5\n");
        }
    }else{
        if(num%5==0) {
            printf("divisible by 5 but not 3\n");

        }else {
           printf("divisible by none\n");
        }
    }
}