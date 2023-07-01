#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type for a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_2 - typedef for struct dog
 */

typedef struct dog dog_2;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
