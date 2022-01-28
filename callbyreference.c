#include<stdio.h>
void fun1(int* add,int *sub)
{
*add=*add+*sub;
*sub=*add-*sub-*sub;
return;
}
int main()
{
    int a,b;
printf("Enter the value of a and b :\n");
scanf("%d\n%d",&a,&b);
printf("The value of a now is %d\nThe value of b now is %d\n",a,b);
fun1(&a,&b);
printf("The value of a after is %d \nYhe value of b after is %d\n",a,b);
    return 0;
}