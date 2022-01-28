#include<stdio.h>
int main()
{
    int a[5]={1,2,6,445,35};
    int *ptr=&a[0];
    for(int i=0;i<5;i++)
 { 
       printf("The value of a[%d] is %d\n",i,*(ptr+i));
     printf("The value of a[%d] is %d\n",i,a[i]);
      printf("The value of a[%d] is %d\n",i,*(a+i));
 }
    return 0;
}