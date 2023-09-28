#include <stdlib.h>
#include <stdio.h>
#include "struct.h"
#include "struct.c"

int main()
{
    Person me = {.name = "Bojan Miron", .gender = FEMALE, .birth = {.year = 2000, .month = 5, .day = 1}};
    Person p2 = {.name = "John", .gender = MALE, .birth = {.year = 2000, .month = 2, .day = 10}};
    Person p3 = {.name = "Mary", .gender = FEMALE, .birth = {.year = 2001, .month = 10, .day = 12}};
    printPerson(me);
    Person persons[3] = {me, p2, p3};
    printPersons(3,persons);

    return 0;
}