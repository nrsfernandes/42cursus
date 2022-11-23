/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <contact@nrsfernandes.pt>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:49:28 by nrafael-          #+#    #+#             */
/*   Updated: 2022/11/23 14:49:28 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ftprintf.h"

int	ft_putchar(char c)
{
	return(write (1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	len;

	if (!str)
	{
		return(write (1, "(null)", 6));
	}
	len = ft_strlen(str);
	return (write (1, str, len));
}

int	ft_putnbr(int nbr)
{
	char	*str;
	int		len;

	str = ft_itoa(nbr);
	len = ft_putstr(str);
	free(str);
	return (len);
}

int	putnbr_u(unsigned int nbr)
{
	char	*str;
	int		len;

	str = ft_utoa(nbr);
	len = ft_putstr(str);
	free(str);
	return (len);
}
