#include <libft.h>

int main()
{
	int i;
	i = 1000000;
	char *a[i + 1];

	for (int j = 0; j < 10000; ++j)
	{
		a[j] = ft_memalloc(10);
	}

	i = 10000;
	ft_free(a[7]);
///while (i--)
//{
//	free(s[i]);
//}
ft_gc(&g_memaloced);
}