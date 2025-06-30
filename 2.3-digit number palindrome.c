#include <stdio.h>
int main() {
    int num=121, rev=0,temp, rem;
    temp=num;
    rem=num %10;
    rev=rev*10+ rem;
    num=num/10;
    rem=num % 10;
    rev=rev*10+rem;
    num=num/10;
    rem=num%10;
    rev=rev*10+rem;
    if (temp== rev)
    printf("number i palindrome");
    else
    printf("number is not palindrome");


}