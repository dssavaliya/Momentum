#include<stdio.h>
int main()
{
int a , b , c , d;
printf("Enter Four Number :\na = ");
scanf("%d",&a);

printf("b = ");
scanf("%d",&b);

printf("c = ");
scanf("%d",&c);

printf("d = ");
scanf("%d",&d);

if(a>b)

   if(a>c)
   
      if(a>d)
      printf("a = %d is Max",a);
      else
      printf("d = %d is Max",d);
   
   else if(c>d)
        printf("c = %d is Max",c);
        else
        printf("d = %d is Max",d);

else if(b>c)

        if(b>d)
        printf("b = %d is Max",b);
        else
        printf("d = %d is Max",d);
     
     else if(c>d)
          printf("c = %d is Max",c);
          else
          printf("d = %d is Max",d);
     
return 0;
}