#ifndef DOG_H
#define DOG_H

/**
* struct dog - short description
* @name: name member
* @age: age member
* @owner: owner member
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog my_dog;
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
