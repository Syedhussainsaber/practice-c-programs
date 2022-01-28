#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no of rows you want to print:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
for(int j=0;j<2*i-1;j++)
{
    {
if(j==0)
{
for(int k=n-i;k>0;k--)
{
printf("  ");
}
}
if((j==0)||(i==n)||(j==2*i-3))
printf("* ");
}
}
printf("\n");
    }
    return 0;
}