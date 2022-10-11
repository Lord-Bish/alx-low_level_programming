#include <stdio.h>
#include "dog.h"

/** main: prints struct dog
 *
 * return: nothing
 */

void print_dog(struct dog *d)
{
	if(d)
	{
		if(d->name)
			printf("name: %s\n", d->name);
		else
			printf("name: (nil)\n");		printf("age: %.6f\n", d->age);

		if(d->owner != NULL)
			printf("owner: %s\n", d->owner);
		else
			printf("owner: (nil)\n");
	}
}
