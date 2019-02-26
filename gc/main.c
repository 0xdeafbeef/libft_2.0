#include <libft.h>

int main()
{
	int i;
	i = 1000;
	char *a;

	a = ft_memalloc(1000);
	ft_memalloc(100);
	ft_memalloc(100);
	ft_memalloc(100);
	ft_memalloc(100);
	ft_memalloc(100);
	ft_memalloc(100);
	ft_memalloc(100);
	ft_memalloc(100);
	ft_memalloc(100);
	ft_memalloc(100);
	ft_memalloc(100);
	ft_memalloc(100);
	ft_memalloc(100);
	ft_memalloc(100);
	for (int j = 0; j < i - 1; ++j)
	{
		a[j] = 'b';
	}
	printf("%s", a);
	ft_free(a);
	for (int j = 0; j < i - 1; ++j)
	{
		a[j] = 'b';
	}
	printf("%s", a);

//	free(a);
///while (i--)
//{
//	free(s[i]);
//}
	ft_gc(&g_memaloced);
}