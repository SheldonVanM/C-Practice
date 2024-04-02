#include <stdio.h>
#include <string.h>
#include "person.h"

int main(void)
{
    struct person p1;
    p1.age = 27;
    p1.height = 178;
    p1.weight = 189;
    strcpy(p1.name, "Sheldor Awesome Sauce");

    printf("My age is %d\n", p1.age);
    printf("My height is %d\n", p1.height);
    printf("My weight is %d\n", p1.weight);
    printf("My weight is %s\n", p1.name);
}