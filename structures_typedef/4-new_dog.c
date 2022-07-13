#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new function
 * @name: pointer name
 * @age: float
 * @owner: poiter a char
 * Return: null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog_cpy;
unsigned int i, len_name, len_owner;
if (name == NULL || owner == NULL)
{
return (NULL);
}
dog_cpy = malloc(sizeof(dog_t));
if (dog_cpy == NULL)
{
return (NULL);
}
for (len_name = 0; name[len_name]; len_name++)
;
dog_cpy->name = malloc(sizeof(char) * len_name);
if (dog_cpy->name == NULL)
{
free(dog_cpy);
return (NULL);
}
for (len_owner = 0; owner[len_owner]; len_owner++)
;
dog_cpy->owner = malloc(sizeof(char) * len_owner);
if (dog_cpy->owner == NULL)
{
free(dog_cpy->name);
free(dog_cpy);
return (NULL);
}
for (i = 0; i < len_name; i++)
{
dog_cpy->name[i] = name[i];
}
dog_cpy->age = age;
for (i = 0; i < len_owner; i++)
{
dog_cpy->owner[i] = owner[i];
}
return (dog_cpy);
}

