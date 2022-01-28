#include<stdio.h>
int main()
{
int n,a[3][6];
printf("Enter the no of rows you want to print:\n");
scanf("%d",&n);
for (int i=0;i<n;i++)
{
for(int j=0;j<2*n-1;j++)
{
if((i+j==n-1)||(j-i==n-1)||(i==n-1))
{
printf("* "); 
}
else
{
printf("  ");
}
}
printf("\n");
}
return 0;
}
/*code for printing the follow ing pattern
    
    *
   * *
  *   * 
 *     *
* * * * * 

*/