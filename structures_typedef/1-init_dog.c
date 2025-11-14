#include "dog.h"
#include <stdlib>

/**
 * init_dog - initialise une variable de type structure chien
 * @d: pointeur de la structure chien à initialiser
 * @name: nom du chien
 * @age: age du chien
 * @owner: propriétaire du chien
 *
 * Description: Site le nom, l'age, et le propriétaire de la structure chien.
 * Si d est NULL, la fonction ne fait rien.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;

    d->name = name;
    d->age = age;
    d->owner = owner;
}
