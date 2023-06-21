#ifndef _DOG_H_
#define _DOG_H_

/**
  *struct dog - simple staruct
  *@name: the name of the dog
  *@age: the age of dog
  *@owner: the owner
  *
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
