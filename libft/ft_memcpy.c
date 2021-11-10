/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:28:11 by nrafael-          #+#    #+#             */
/*   Updated: 2021/10/26 18:17:49 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a;
	char	*b;

	a = (char *)src;
	b = (char *)dst;
	while (n-- > 0)
	{
		*b++ = *a++;
	}
	return (dst);
}

int main()
{
	char	s1[] = "batman";
	char	s2[] = "batman";

	ft_memcpy(&s2[2], s1, 4);
	memcpy(&s1[2], s1, 4);
	printf("%s\n", s2);
	printf("%s\n", s1);
}
