/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:19:57 by nrafael-          #+#    #+#             */
/*   Updated: 2021/11/22 15:52:15 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putendl_fd(char *s, int fd)
{
	int	cnt;

	if (!s)
		return (0);
	cnt = 0;
	cnt = cnt + ft_putstr_fd(s, fd);
	cnt = cnt + ft_putchar_fd('\n', fd);
	return (cnt);
}
