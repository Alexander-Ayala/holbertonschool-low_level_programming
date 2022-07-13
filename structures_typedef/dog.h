#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog.h
 * @name: type element pointer char
 * @age: type element float
 * @owner: type element pointer char
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - typedef struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
