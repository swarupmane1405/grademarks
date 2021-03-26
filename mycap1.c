//Input marks of five subject from user, calculate percentage and print grade

#include<stdio.h>
#include<conio.h>

int main()
{
 float a;

 printf("Enter the percentage of student:");
 scanf("%f",&a);

if(a>=85)
printf("The grade of student is A");
else
{
 if(a>=70 && a<84)
 printf("The grade of student is B");
 else
  {
   if(a>=55 && a<69)
   printf("The grade of student is C");
   else
   {
    if(a>=40 && a<54)
    printf("The grade of student is D");
    else
   if(a<40)
       {
	   printf("The grade of student is FAIL");
       }
}
}
}


getch();
return 0;
}

