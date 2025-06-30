#include <stdio.h>
int main () {
    char ch='A';
    if (ch>= 'A' && ch <= 'Z')
    printf("character is uppercase");
    else if (ch >='a' && ch <= 'z')
    printf("character is lowercase");
    else
    printf("Not an Alphabet");


}