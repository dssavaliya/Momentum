#include<stdio.h>
int main() {

    int unit ;
    float Rs ,SC ;
    printf("Enter unit: ");
    scanf("%d", &unit);

    if (unit <= 50)
        Rs = (unit*0.50);

    else if (unit <= 150)
        Rs = ((unit-50)*0.75) + 25;

        else if (unit <= 250)
        Rs = ((unit-150)*1.20) + 100;
    else
        Rs = ((unit-250)*1.50) + 220;

SC = Rs*0.20;


printf("Electricity Bill = Rs.%.2f", Rs+SC);

return 0;
}