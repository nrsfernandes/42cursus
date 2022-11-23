/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <contact@nrsfernandes.pt>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:43:11 by nrafael-          #+#    #+#             */
/*   Updated: 2022/11/23 14:43:11 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	space_counter(const char	*s);

int	ft_atoi(const char	*str)
{
	long	nbr;
	long	buf;
	int		sign;
	size_t	count;

	nbr = 0;
	sign = 1;
	count = space_counter(str);
	if (str[count] == '-' || str[count] == '+')
		if (str[count++] == '-')
			sign = -1;
	while (ft_isdigit(str[count]))
	{
		buf = nbr;
		nbr = (nbr * 10) + (str[count++] - '0');
		if (buf > nbr)
		{
			if (sign > 0)
				return (-1);
			else
				return (0);
		}
	}
	return (nbr * sign);
}

static int	space_counter(const char	*s)
{
	int	count;

	count = 0;
	while (s[count] == 32 || (s[count] > 8 && s[count] < 14))
		count += 1;
	return (count);
}
