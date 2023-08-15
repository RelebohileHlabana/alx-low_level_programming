#ifndef DOG_H
#define DOG_H

#include <stddef.h>

/**
 * struct dog - Define a new type dog_t
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This structure defines a dog's attributes.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* New type dog_t as an alias for struct dog */
typedef struct dog dog_t;

/* Prototypes for functions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
