#ifndef INV_DOG_H
#define INV_DOG_H
/**
 *struct dog - entry point
 *@name: dog name
 *@age: dog age
 *@owner: dog propri
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
