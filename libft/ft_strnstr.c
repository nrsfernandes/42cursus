/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:30:00 by nrafael-          #+#    #+#             */
/*   Updated: 2021/10/21 19:33:38 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[i] != 0 && i < size)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != 0 && j + i < size)
			j++;
		if (j == ft_strlen(needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
int main () {
   const char str[] = "Pedro é bixa";
   const char ch = 'd';
   char *ret;

   ret = strnstr(str, &ch, 15);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
