#include<stdio.h>
int main()
{
    int choice,n;
printf("Choose the choice u want to print the pattern:\n1.Triangular pattern\n2.Reverse trianular pattern\n");
scanf("%d",&choice);
if(choice==1)
{
    printf("You have selected the triangular pattern.\n");
    printf("\nEnter the how many lines you want to print in the pattern\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((j==0)||(i==n-1)||(j<=i))
            {
            printf("* ");
            }
            else
            printf("  ");
        }
        printf("\n");
    }
}
 if(choice==2)
 {
 printf("You have selected the reverse triangular pattern.\n");
    printf("\nEnter the how many lines you want to print in the pattern\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((j==0)||(i==0)||((i+j)<n))
            {
            printf("* ");
            }
            else
            printf("  ");
        }
        printf("\n");
    }
 }
 return 0;
}