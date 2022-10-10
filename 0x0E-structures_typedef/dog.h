#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - Structure of a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Details of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t: Type name for dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
