#include "dog.h"
#include <stddef.h>
/**
 *init_dog - iniciliza estructura
 * @d: name
 * @name: type char
 * @age: float
 * @owner: char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
}	
