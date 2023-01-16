#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - struc tyedef
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		dog = malloc(sizeof(dog_t));

		if (dog == NULL)
			return (NULL);

		dog->name = malloc(sizeof(char) * name_l);

		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}

		dog->owner = malloc(sizeof(char) * own_l);

		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}

		dog->name = _strcpy(dog->name, name);
		dog->owner = _strcpy(dog->owner, owner);
		dog->age = age;
	}

	return (dog);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
