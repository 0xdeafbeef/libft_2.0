#include <libft.h>

int main()
{
	int i;
	char *s[10001];
	i = 10000;
	while (i --)
	{
		s[i] = ft_memalloc(1);
	}

	i = 10000;
	while (i --)
	{
		free((void *) g_memaloced->data[i]);
	}
//while (i--)
//{
//	free(s[i]);
//}
	free(g_memaloced->data);
	free(g_memaloced);

}