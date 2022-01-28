#include<stdio.h>
int fun2(int* ptr)
{
int sum=0;
for(int i=0;i<5;i++)
{
sum=sum+*(ptr+i);
}
return sum;
}
int fun1(int arr[]);
int main()
{
    int a[5]={5,60,45,12,26};
fun2(&a[0]);
 fun1(a);
    printf("The sum of all digits in an array is %d\n",fun2(a));
    printf("The sum of all digits in an array is %d\n",fun1(a));
        return 0;
}
int fun1(int arr[])
{
    int sum=0;
for(int i=0;i<5;i++)
{
sum=sum+arr[i];
}
return sum;
}