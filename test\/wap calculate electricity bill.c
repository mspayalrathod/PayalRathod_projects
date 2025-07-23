#include<stdio.h>
int main() {
    int unit;
    
    printf("enter the unit of electricitybill:");
    scanf("%d",&unit);
    
    if(unit>=1 && unit <=50)
      printf("the payble amount is % drs", unit *30);
    elseif(unit>=51 && unit <=150)
      printf("the payable amount is %d rs.", unit *40);
      {
    else
    printf("the payable amount is %drs."), unit *50");
}
    
    
    


    
}