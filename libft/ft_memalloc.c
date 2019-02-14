/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhetting <qhetting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 19:36:01 by qhetting          #+#    #+#             */
/*   Updated: 2019/02/14 20:26:37 by qhetting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_gc_vector *g_memaloced = NULL;
void *ft_memalloc(size_t size)
{
	char *ch;
	if(!g_memaloced)
		g_memaloced = init_tgc_vector();
	ch = malloc(size);
	ft_bzero(ch, size + sizeof(size_t));
	if (ch == NULL)
		return (NULL);
	ft_tgc_append(&g_memaloced, (ssize_t)ch);
	return (ch);
}
