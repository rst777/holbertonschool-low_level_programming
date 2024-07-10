#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure représentant un chien
 * @name: Pointeur vers une chaîne de caractères pour le nom du chien
 * @age: Âge du chien en flottant
 * @owner: Pointeur vers une chaîne de caractères
 * pour le nom du propriétaire
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
