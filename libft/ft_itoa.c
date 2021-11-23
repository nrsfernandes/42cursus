/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:09:25 by nrafael-          #+#    #+#             */
/*   Updated: 2021/11/22 16:22:34 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*int_to_str(int n, int pow_ten, short sign, char *out)
{
	int	i;

	i = 0;
	if (sign == -1)
		i++;
	while (pow_ten)
	{
		out[i++] = (char)(n / pow_ten * sign + '0');
		n %= pow_ten;
		pow_ten /= 10;
	}
	out[i] = '\0';
	return (out);
}

char	*ft_itoa(int n)
{
	size_t			i;
	char			*out;
	short			sign;
	int				pow_ten;

	i = 1;
	pow_ten = 1;
	sign = 0;
	if (n < 0)
		sign++;
	while (n / pow_ten / 10 && i++)
		pow_ten *= 10;
	out = (char *)malloc(i + sign + 1);
	if (!out)
		return (NULL);
	if (sign == 1)
	{
		out[0] = '-';
		sign = -1;
	}
	else
		sign++;
	return (int_to_str(n, pow_ten, sign, out));
}
