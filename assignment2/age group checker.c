#include<stdio.h>
int main() {
    int age;
    printf("enter age:");
    scanf("%d", &age);
    if(age<12){
        printf("child\n");
    }else{
        if(age<+59) {
            printf("adult\n");
        }else {
            printf("senior\n");
        }
    }
}