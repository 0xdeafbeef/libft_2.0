#include <libft.h>

int main()
{
	int *a = ft_memalloc(1000);
	ft_free(&a);
	ft_memalloc(22);
	ft_memalloc(22);
	ft_memalloc(22);

	ft_gc();
}