#include <stdio.h>
#include <string.h>
#define N 3
typedef struct employer
{
    char name[30];
    int id;
    int age;
    int experience;
} e;
int main()
{
    e e[N];
    int id;
    strcpy(e[1].name, "Syed Hussain");
    e[1].id = 238;
    e[1].age = 18;
    e[1].experience = 0;
    e[2].id = 258;
    e[2].experience = 2;
    e[2].age = 21;
    strcpy(e[2].name, "Syed Sadiq");
    strcpy(e[0].name, "Syed Siddiq");
    e[0].id = 201;
    e[0].age = 22;
    e[0].experience = 5;
    printf("Enter the id of an Employer,To know his details :\n");
    scanf("%d", &id);
    {
        if (id == 238)
            printf("\nThe employeer name is %s\nHis age is %d\nHis has an experience of %d years\n", e[1].name, e[1].age, e[1].experience);
        else if (id == 201)
            printf("\nThe employeer name is %s\nHis age is %d\nHis has an experience of %d years\n", e[0].name, e[0].age, e[0].experience);
        else if (id == 258)
            printf("\nThe employeer name is %s\nHis age is %d\nHis has an experience of %d years\n", e[2].name, e[2].age, e[2].experience);
        else
            printf("\nIncorrect id !.Enter a correct id\n");
    }
    return 0;
}