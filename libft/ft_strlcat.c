/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:23:19 by nrafael-          #+#    #+#             */
/*   Updated: 2021/10/21 18:43:03 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	total;
	size_t	original;

	original = size;
	total = ft_strlen(dst) + ft_strlen(src);
	while (*dst != 0 && size > 0)
	{
		dst++;
		size--;
	}
	if (size == 0)
		return (ft_strlen(src) + original);
	while (*src != 0 && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = 0;
	return (total);
	return (0);
}
/*
int main()
{
	const char src[50] = "Pedro é bixa";
	char dest[50];

   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);

   ft_strlcat(dest, src, 25);
  // ft_memmove(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);		
}*/
