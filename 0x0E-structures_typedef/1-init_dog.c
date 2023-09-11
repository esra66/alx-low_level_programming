#ifndef MY_HEADER_H
#define MY_HEADER_H 
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog attribute
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: Always 0.
 * Description: The owner of the dog
 */
struct dog 
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *dog, char *name, float age, char *owner)
{
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}
#endif
