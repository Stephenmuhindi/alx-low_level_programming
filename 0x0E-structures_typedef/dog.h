#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog's bio
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Description: This structure holds information about a dog's bio, including
 * its name, age, and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
