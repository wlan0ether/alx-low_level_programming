#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Toppy", 2.3, "Jesse");
	printf("My name is %s, and I am %.1f :) - woof !\n", my_dog->name, my dog->age);
	return (0);
}
