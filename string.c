#include<stdio.h>
void printstr(char a[])
{
    int i=0;
while(a[i]!='\0')
{
printf("%c",a[i]);
i++;
}
}
int main()
{
    char a[30];
    gets(a);
printstr(a);
    printf("\n%s\n",a);
    puts(a);
    return 0;
}