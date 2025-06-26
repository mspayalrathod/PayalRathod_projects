#include <stdio.h>
int main() {
    int minutes=130;
    int hours= minutes / 60;
    int mins= minutes % 60;
    printf("%d minutes= %d hour (s) and %d minute (s)/n", minutes, hours, mins);
}