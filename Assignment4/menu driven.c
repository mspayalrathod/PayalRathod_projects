#include<stdio.h>
int main() {
    int no;
    char opt;

    printf("Enter a number: ");
    scanf("%d", &no);

    printf("Enter option (1-Even/Odd, 2-Prime, 3-Palindrome, 4-Positive/Negative): ");
    scanf(" %c", &opt);  // space before %c to consume newline

    if (opt == '1') {
        if (no % 2 == 0)
            printf("Number is Even");
        else
            printf("Number is Odd");
    }

    else if (opt == '2') {
        int count = 0;
        for (int i = 1; i <= no; i++) {
            if (no % i == 0)
                count++;
        }
        if (count == 2)
            printf("Prime Number");
        else
            printf("Not a Prime Number");
    }

    else if (opt == '3') {
        int temp = no, rev = 0, rem;
        while (no != 0) {
            rem = no % 10;
            rev = rev * 10 + rem;
            no /= 10;
        }
        if (rev == temp)
            printf("Palindrome Number");
        else
            printf("Not a Palindrome");
    }

    else if (opt == '4') {
        if (no >= 0)
            printf("Number is Positive");
        else
            printf("Number is Negative");
    }

    else {
        printf("Invalid Option");
    }
}

    