#include <stdio.h>
int main() {
    int sal=4500, da, ta, hra, totalsal;
    if(sal<=5000) 
    {
        da=0.10*sal;
        ta=0.20*sal;
        hra=0.25*sal;

    }
    else
    {
        da=0.15*sal;
        ta=0.25*sal;
        hra=0.30*sal;
    }
    totalsal=da+ta+hra;
    printf("%d", totalsal);
}