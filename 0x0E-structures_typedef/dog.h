#ifndef DOG_H
#define DOG_H

/**
 * struct dog - char* name, owner, float age
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: defining new type struct dog, with name, age and owner elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);*/
/*void free_dog(dog_t *d);*/

#endif /* _DOG_H_*/
