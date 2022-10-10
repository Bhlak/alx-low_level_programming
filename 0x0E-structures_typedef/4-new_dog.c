#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - Creates a new dog
 * @name: Name of new dog
 * @age: Age of new dog
 * @owner: Owner of new dog
 * Return: New dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_one;
	int namez = 0, ownerz = 0;

	if (name != NULL && owner != NULL)
	{
		namez = _strlen(name) + 1;
		ownerz = _strlen(owner) + 1;
		new_one = malloco(sizeof(dog_t));

		if (new_one == NULL || namez == NULL || ownerz == NULL)
		{
			free(new_one);
			return (NULL);
		}
		new_one->name = malloc(sizeof(char) * namez);
		new_one->owner = malloc(sizeof(char) * ownerz);

		new_one->name = _strcpy(new_one->name, name);
		new_one->owner = _strcpy(new_one->owner, owner);
		new_one->age = age;
	}
	return (new_one);
}



/**
 * _strlen - Returns the length of the string
 * @s: String to be processed
 * Return: Length
 */

int _strlen(char *s)
{
	unsigned int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strcpy - Copies a string over
 * @dest: Destination
 * @src: Source
 * Return: Copied
 */

char *_strcpy(char *dest, char *src)
{
	unsigned int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
