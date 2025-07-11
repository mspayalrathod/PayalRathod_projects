
#include <stdio.h>

// M function to print odd numbers
void M_Odd(int start, int end) {
    printf("Odd numbers: ");
    for(int i = start; i <= end; i++) {
        if(i % 2 != 0)
            printf("%d ", i);
    }
    printf("\n");
}

// M function to print even numbers
void M_Even(int start, int end) {
    printf("Even numbers: ");
    for(int i = start; i <= end; i++) {
        if(i % 2 == 0)
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter start and end values: ");
    scanf("%d %d", &start, &end);

    M_Odd(start, end);
    M_Even(start, end);

    return 0;
}
