#include <stdio.h>
#include <stdlib>
#include"dog.h"
/**
 * init_dog - dog attribute
 * @d: pointer to struct dog to initialize
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: Always 0.
 * Description: The owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}

