#include <stddef.h>
#include <ntsid.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef GC_FT_GC_H
#define GC_FT_GC_H
 #define TGC_OPTIMAL_SIZE (2u<<5u)
#endif //GC_FT_GC_H
typedef struct s_gc_vector
{
	ssize_t count;
	ssize_t size;
	void *data;
}				t_gc_vector;
void ft_tgc_append(t_gc_vector **vector, size_t data);
t_gc_vector *init_tgc_vector();
extern t_gc_vector *g_memaloced;
