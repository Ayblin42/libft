/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:36:41 by ayblin            #+#    #+#             */
/*   Updated: 2021/11/25 17:30:03 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	if (!nmemb || !size)
		return (0);
	ret = malloc (nmemb * size);
	if (!ret)
		return (0);
	ft_bzero(ret, nmemb);
	return (ret);
}
