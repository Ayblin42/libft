/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:20:05 by ayblin            #+#    #+#             */
/*   Updated: 2021/11/25 17:16:50 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buff;
	size_t			i;

	i = 0;
	buff = (unsigned char *)s;
	while (buff[i] && n-- > 0)
	{
		if (buff[i] == (unsigned char)c)
			return ((void *)s);
		i++;
		s++;
	}
	return (NULL);
}
