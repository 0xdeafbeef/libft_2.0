#include <libft.h>

int main()
{
	int *a = ft_memalloc(1000);
//	free(a);
	ft_free(a);
//	ft_free(a);
	ft_gc(&g_memaloced);
}