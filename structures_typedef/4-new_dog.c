#include "2-strlen.c"
#include "9-strcpy.c"
#include "dog.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - New dog info and store name and owner
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Info of dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int n, o;

	if (name != NULL && owner != NULL)
	{
		n = _strlen(name) + 1;
		o = _strlen(owner) + 1;
		dog = malloc(sizeof(dog_t));

		if (dog == NULL)
			return (NULL);

		dog->name = malloc(sizeof(char) * n);

		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}

		dog->owner = malloc(sizeof(char) * o);

		if (dog->owner == NULL)
		{
			free(dog);
			free(dog->name);
			return (NULL);
		}

		dog->name = _strcpy(dog->name, name);
		dog->owner = _strcpy(dog->owner, owner);
		dog->age = age;

	}

	return (dog);
}
