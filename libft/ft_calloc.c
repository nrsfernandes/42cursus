/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:50:15 by nrafael-          #+#    #+#             */
/*   Updated: 2021/11/22 16:05:16 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;

	a = (char *)malloc(size * count);
	if (!a)
		return (NULL);
	ft_bzero(a, count);
	return (a);
}
