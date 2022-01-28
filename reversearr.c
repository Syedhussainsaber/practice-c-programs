#include<stdio.h>
void revarr(int*ptr)
{
printf("\nThe revers order is :\n");
for(int j=6;j>=0;j--)
{
printf("%d ",*(ptr+j));
}
}
int main()
{
    int arr[]={10,72,13,41,455,26,263};
    printf("The oiginal order of array is :\n");
    for(int i=0;i<7;i++)
    {
    printf("%d ",arr[i]);
    }
    revarr(&arr[0]);
    return 0;
}