#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter 3 sides :");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b) {
        if(b==c) {
            printf("Equilateral Triangle\n");
        } else{
            printf("Isosceles Triangle\n");

        }
    }else{
        if(b==c || a==c) {
            printf("isoscles Triangle\n");
        }else{
            printf("scalene triangle\n");
        }
    }
}