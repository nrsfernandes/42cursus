/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:09:25 by nrafael-          #+#    #+#             */
/*   Updated: 2021/10/21 19:16:50 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	while (n-- > 0)
	{
		str = (unsigned char *)s;
		if (*str == (unsigned char)c)
		{
			return (str);
		}
		s++;
	}
	return (NULL);
}
/*
int main () {
   const char str[] = "Pedro é bixa";
   const char ch = 'b';
   char *ret;

   ret = ft_memchr(str, ch, 3);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
