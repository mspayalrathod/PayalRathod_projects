#include <stdio.h>

// M function to add alternate numbers
int M(int start, int end) {
    int sum = 0;
    for(int i = start; i <= end; i += 2) {
        sum += i;
    }
    return sum;
}

int main() {
    int start, end;
    printf("Enter start and end values: ");
    scanf("%d %d", &start, &end);

    int result = M(start, end);
    printf("Sum of alternate numbers = %d\n", result);

    return 0;
}