/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:23:27 by nrafael-          #+#    #+#             */
/*   Updated: 2021/10/21 18:41:26 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*final;
	size_t	total;
	size_t	original;

	original = size;
	total = ft_strlen(dst) + ft_strlen(src);
	final = dst;
	while (*src != 0 && size > 1)
	{
		*dst++ = *src++;
		size --;
	}
	*dst = 0;
	return (final);
}
/*
int main()
{
   const char src[50] = "Pedro é bixa";
   char dest[50];

   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_strlcpy(dest, src, 3*//*strlen(src)+1*//*);
   // strlcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
}*/
