#include<stdio.h>
#include<string.h>
int main()
{
char s1[]="saber";
char s2[]="sadiq";
char s3[15];
puts(strcat(s1,s2));
printf("The reverse of the s1 is %s\n",strrev(s1));
printf("The length of the string s1 is %d\n",strlen(s1));
strcpy(s3,s2);
printf("The s1 is %s\n",s1);
printf("The s3 is %s\n",s3);
printf("The comparison between s3 and s1 is %d\n",strcmp(s3,s1));
puts(strcat(s2,s3));
    return 0;
}   