#include<stdio.h>
#include<string.h>
#define N 10
struct student
{
int rollno;
char name[30];
float marks;
}student[N];
int main()
{

int n,choice;
printf("Enter the names of the students:\n");
for(int i=0;i<N;i++)
    {
gets(student[i].name);
}
for(int i=1,j=0;(j<N)&&(i<=N);j++,i++)
{
printf("Enter the marks of student%d %s\n",i,student[j].name);
scanf("%f",&student[j].marks);
}
printf("Choose the choice:\n1.Detail of any one student\n2.All\n");
scanf("%d",&choice);
if(choice==1)
{
printf("\n\nEnter the roll no of the student to view his final exam marks :\n");
scanf("%d",&n);

for(int i=n-1,j=n;(i<n)&&((j>0)&&(j<=N));i++,j++)
{
    if(j==n)
    {
printf("The name of the student%d is %s\nHe secured %0.3f marks in his final examination\n",j,student[i].name,student[i].marks);
break;
}
}
if((n>N)||(n<=0))
{
    printf("Sorry there are %d students in our class !You hav entered other then that !\n",N);
}
}
if(choice==2)
{
for(int i=0,j=1;(i<N)&&((j>0)&&(j<=N));i++,j++)
{
    {
printf("The name of the student%d is %s\nHe secured %0.3f marks in his final examination\n",j,student[i].name,student[i].marks);
}
}
}

/*
strcpy(student1.name,"Syed Saber");
strcpy(student2.name,"Syed Khaleel");
strcpy(student3.name,"Syed Zabi");*/
/*
student1.marks=400;
student2.marks=455;
student3.marks=499;
for(int i=1;i<=3;i++)
{
if(i==1)
{
printf("\nThe name of the student%d is %s\n",i,student1.name);
printf("Roll no of the student%d is %d\n",i,student1.rollno);
printf("The marks of the student%d is %0.0f\n",i,student1.marks);
}
if(i==2)
{
printf("\nThe name of the student%d is %s\n",i,student2.name);
printf("Roll no of the student%d is %d\n",i,student2.rollno);
printf("The marks of the student%d is %0.0f\n",i,student2.marks);
}
if(i==3)
{
printf("\nThe name of the student%d is %s\n",i,student3.name);
printf("Roll no of the student%d is %d\n",i,student3.rollno);
printf("The marks of the student%d is %0.0f\n",i,student3.marks);
}*/
    return 0;
}