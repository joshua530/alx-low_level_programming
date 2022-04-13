#include <stddef.h>
#ifndef FUNC_PTRS_H
#define FUNC_PTRS_H

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
