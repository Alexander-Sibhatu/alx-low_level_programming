#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * print_name - prototype
 * Desc: header file containing prototypes for all functions
 *       used in the 0x0E-function_pointers directory.
 * @name: name to be printed
 * @f: pointer
 */

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
