#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using  malloc and free
 * @ptr: pointer to the memory previously allocaated by malloc
 * @old_size: size of allocated memory for ptr
 * @new_size: size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptr1;
char *old_ptr;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}

if (!ptr1)
return (NULL);
old_ptr = ptr;

if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
ptr1[i] = old_ptr[i];
}

free(ptr);
return (ptr1);
}
