#include "libft/libft.h"

t_gc_vector *init_tgc_vector()
{
	t_gc_vector *vector;

	vector = malloc(sizeof(t_gc_vector));
	ft_bzero(vector, sizeof(t_gc_vector));
	if (vector)
	{
		vector->size = TGC_OPTIMAL_SIZE;
		vector->data = malloc(sizeof(size_t) * TGC_OPTIMAL_SIZE);
	}
	return (vector);
}

void ft_free_gc_vector(t_gc_vector *vector)
{
	if (vector)
	{
		free(vector->data);
		free(vector);
	}
}

void ft_resize_vector(t_gc_vector **vector)
{
	ssize_t ssize;
	ssize_t count;
	ssize_t *data;

	if (*vector)
	{
		count = (*vector)->count;
		ssize = (*vector)->size;
		data = malloc((count * 2) * sizeof(ssize_t));
		data = ft_memcpy(data, (*vector)->data, count);
		free((*vector)->data);
		(*vector)->size = ssize * 2;
		(*vector)->count = count;
		(*vector)->data = data;
	}
}

void ft_tgc_append(t_gc_vector **vector, size_t data)
{
	t_gc_vector *temp;

	temp = *vector;
	if (temp)
	{
		if (temp->size - temp->count <= 1)
		{
			ft_resize_vector(vector);
			temp = *vector;
		}
		temp->count += 1;
		(*vector)->data = data;
	}
	*vector = temp;
}