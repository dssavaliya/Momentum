#include<stdio.h>
int main()
{
char day;

printf("Enter First latter of Day (M,t,W,t,F,s,S):\n");
scanf("%c",&day);

switch (day)
{
    case 'M':
    printf("Monday\n");
    break;

    case 't':
    printf("tuesday\n");
    break;

    case 'W':
    printf("Wednesday\n");
    break;

    case 'T':
    printf("Thursday\n");
    break;

    case 'F':
    printf("Friday\n");
    break;

    case 's':
    printf("saturday\n");
    break;

    case 'S':
    printf("Sunday\n");
    break;

default:
printf("Enter Valid Character");
    break;
}



    return 0;
}