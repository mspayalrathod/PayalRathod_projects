#include <stdio.h>
int main() {
    int number, digit, sum=0;
    // Input from user
    printf("Enter a5,6,or7-digit number: ");
    scanf("%d", &number);
   if (number >= 10000 && number<= 9999999) {
    while (number>0) { 
        sum += number% 10;
    number /=10;
   }
   printf("sum=%d\n", sum);
} else {
    printf("Enter 5, 6, or 7 digit number.\n");
}

}