/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:17:22 by nrafael-          #+#    #+#             */
/*   Updated: 2021/10/21 19:30:25 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sv1;
	unsigned char	*sv2;

	sv1 = (unsigned char *)s1;
	sv2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*sv1 == *sv2 & n-- > 0)
	{
		sv1++;
		sv2++;
		if (n == 0)
			return (0);
	}
	if (*sv1 != *sv2)
	{
		return (*sv1 - *sv2);
	}
	return (0);
}
/*
int main () {
   char str1[19];
   char str2[16];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "abcdef", 7);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}*/
