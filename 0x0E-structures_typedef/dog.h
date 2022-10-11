#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - struct that stores some information of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: ownder of the dog
 * Description: struct called "dog" that stores its name,
 * age and owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
