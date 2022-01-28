#include<stdio.h> //pointer arthemetic
int main()
{
int a,*ptr=&a;
printf("Enter th value of a:\n");
scanf("%d",&a);
printf("The address of a is %d\n",&a);
printf("When we add ptr of a with 2 then it is %d\n",(ptr+2));
return 0;
}