#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a user defined data type dog
 *
 * @name: pointer to name of the dog
 * @age: age of the dog
 * @owner:pointer to name of dogs owner
 *
 * Description: the dog structure holds some atributes of a real life dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
