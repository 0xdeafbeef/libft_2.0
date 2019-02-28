#ifndef GC_FT_GC_H
#define GC_FT_GC_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct s_malloced
{
	struct s_malloced *next;
	void *pointer;
	char is_freed;
}			t_malloced;
extern t_malloced *g_malloced;
t_malloced *init(void *ptr);
void append(void *ptr);
void ft_gc();
void ft_free(void **ptr);
#endif //GC_FT_GC_H
