/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:14:25 by nrafael-          #+#    #+#             */
/*   Updated: 2021/10/21 18:30:49 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;

	a = (char *)src;
	b = (char *)dst;
	if (a < b)
		while (len--)
			b[len] = a[len];
	else
		ft_memcpy(b, a, len);
	return (dst);
}
/*
int main()
{
   const char src[50] = "Pedro é bixa";
   char dest[50];

   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memmove(dest, src, strlen(src)+1);
  // ft_memmove(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
}*/
