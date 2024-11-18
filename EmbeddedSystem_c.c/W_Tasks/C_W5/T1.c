#include <stdio.h>
#include "T1.h"

int main(void)
{
    struct s_Person person;

    printf("Program starting.\n");
    printf("Insert first name: ");
    fgets(person.aFirstName, sizeof(person.aFirstName), stdin);

    size_t len = strlen(person.aFirstName);
    if (len > 0 && person.aFirstName[len - 1] == '\n')
    {
        person.aFirstName[len - 1] = '\0';
    }

    printf("Insert last name: ");
    fgets(person.aLastName, sizeof(person.aLastName), stdin);

    len = strlen(person.aLastName);
    if (len > 0 && person.aLastName[len - 1] == '\n')
    {
        person.aLastName[len - 1] = '\0';
    }

    printf("Hello %s %s!\n", person.aFirstName, person.aLastName);

    printf("Program ending.\n");
    return 0;
}
