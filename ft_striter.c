/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrameau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 23:12:58 by jrameau           #+#    #+#             */
/*   Updated: 2019/02/28 16:14:49 by qhetting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_striter(char *s, void (*f)(char *))
{
	int		i;

	i = 0;
	if (s && f)
		while (*(s + i))
			f(s + i++);
}
