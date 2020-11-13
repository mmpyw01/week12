#include <stdio.h>
#include <string.h>
int age;
struct person
{
    char old[100];
    char work[100];

};

int main()
{
    struct person child, teen, adult;

    printf("How old are you? : ");
    scanf_s("%d", &age);

    if (age <= 15)
    {
        strcpy_s(child.old, "You are Child.");
        strcpy_s(child.work, "You are studying at School.");
        printf("%s and %s", child.old, child.work);
    }
    else if (age >= 18 && age <= 25)
    {
        strcpy_s(teen.old, "You are Teen.");
        strcpy_s(teen.work, "You are studying at University.");
        printf("%s and %s", teen.old, teen.work);
    }
    else
    {
        strcpy_s(adult.old, "You are Adult.");
        strcpy_s(adult.work, "You are working.");
        printf("%s and %s", adult.old, adult.work);
    }
    return 0;
}