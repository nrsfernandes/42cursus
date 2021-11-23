/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:19:57 by nrafael-          #+#    #+#             */
/*   Updated: 2021/11/22 16:21:27 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int					cnt;
	short				sign;
	unsigned int		pow_ten;

	cnt = 0;
	pow_ten = 1;
	sign = 0;
	if (n < 0 && ++sign)
	{
		n = -n;
	}
	while (n / pow_ten / 10)
		pow_ten *= 10;
	if (sign)
	{
		cnt += ft_putchar_fd('-', fd);
	}
	while (pow_ten)
	{
		cnt += ft_putchar_fd(n / pow_ten + '0', fd);
		n %= pow_ten;
		pow_ten /= 10;
	}
	return (cnt);
}
