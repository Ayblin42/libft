/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:03:13 by ayblin            #+#    #+#             */
/*   Updated: 2021/11/25 17:05:22 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (!little)
		return ((char *)big);
	while (big[i] && (size_t)i < len)
	{
		j = 0;
		while (big[i + j] == little[j])
		{	
			j++;
		}
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (0);
}
