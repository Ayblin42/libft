/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:04:40 by ayblin            #+#    #+#             */
/*   Updated: 2021/11/25 18:54:41 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int	ft_count_nbr(int n)
{
	int	ret;

	ret = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		ret++;
	while (n != 0)
	{
		n /= 10;
		ret++;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*ret;
	int		len;

	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	len = ft_count_nbr(n);
	ret = malloc(sizeof(char) * (len + 1));
	while (n > 0)
	{
		ret[len] = (n % 10) + '0';
		n /= 10;
		len --;
	}
	if (sign < 0)
		ret[0] = '-';
	return (ret);
}

int     main(int argc, char **argv)
{       
        (void)argc;
        printf("VRAI :%d\n", ft_atoi(argv[1]));
        printf("MINE :%s\n", ft_itoa(ft_atoi(argv[1])));
} 