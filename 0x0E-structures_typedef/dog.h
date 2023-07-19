#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Pointer to a character array for the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a character array for the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
