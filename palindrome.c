#include<stdio.h>
int main()
{
   long int rem,q,n,sum=0,p=10,s;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    q=n;
    for(int i=0;i*i<n;i)
    {
s=n/p;
if(s==0)
{
    break;
}
p=p*10;
    }
    for(int j=0;j<q;j)
    {
rem=q%10;
sum=(sum+rem*p/10);
p=p/10;
q=q/10;
    }   
    if(sum==n)
{
    printf("The entered number is a Palindrome\n");
}
else
{
printf("The entered number is not a Palindrome\n");
}
     return 0;
}