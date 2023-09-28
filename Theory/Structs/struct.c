#include "struct.h"
#include <stdio.h>

void printPerson(Person person)
{
    printf("Person details:\n");
    printf("\n\t-Name: %s", person.name);
    printf("\n\t-Birth date: %i/%i/%i", person.birth.year, person.birth.month, person.birth.day);
    printf("\n\t-Gender: %i\n", person.gender);
    
}

void printPersons(int nrOfPersons, Person *persons)
{
    printf("All people:\n");
    for(int i = 0; i < nrOfPersons; ++i)
    {
        printPerson(persons[i]);
    }
}