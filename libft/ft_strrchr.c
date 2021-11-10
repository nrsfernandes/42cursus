/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:56:04 by nrafael-          #+#    #+#             */
/*   Updated: 2021/10/21 19:08:06 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	ind;

	ind = strlen(s);
	if (s)
	{
		while (s[ind] != (char)c && ind >= 0)
			ind--;
		if (s[ind] == (char)c)
			return ((char *)&s[ind]);
		else
			return (NULL);
	}
	return (NULL);
}
/*
int main () {
   const char str[] = "Pedro é bixa";
   const char ch = 't';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
