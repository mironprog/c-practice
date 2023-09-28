#ifndef STRUCT_STRUCT_H
#define STRUCT_STRUCT_H

typedef struct {
    int year, month, day;
} BirthDate;

enum Gender { FEMALE, MALE };

typedef struct {
    char name[20];
    enum Gender gender;
    BirthDate birth;
} Person;



/**
 * Print information about a single person.
 *
 * @param person The person to be printed.
 */
void printPerson(Person person);

/**
 * Print information about an array of persons.
 *
 * @param nrOfPersons The number of persons in the array.
 * @param persons     An array of Person pointers.
 */
void printPersons(int nrOfPersons, Person *persons);

/**
 * Find and return the youngest person in an array.
 *
 * @param nrOfPersons The number of persons in the array.
 * @param persons     An array of Person pointers.
 * @return            The youngest person.
 */
Person youngestPerson(int nrOfPersons, Person *persons);

/**
 * Compare two persons based on some criteria.
 *
 * @param p1 The first person to compare.
 * @param p2 The second person to compare.
 * @return   A value indicating the comparison result.
 */
int comparePersons(Person p1, Person p2);

#endif //STRUCT_STRUCT_H