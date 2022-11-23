/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <contact@nrsfernandes.pt>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:48:25 by nrafael-          #+#    #+#             */
/*   Updated: 2022/11/23 14:48:25 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	size_t		s1_len;
	size_t		s2_len;
	size_t		str_len;
	char		*str;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = (char *)ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	str_len = 0;
	while (str_len < s1_len)
	{
		str[str_len] = s1[str_len];
		str_len++;
	}
	while (str_len < s1_len + s2_len)
	{
		str[str_len] = s2[str_len - s1_len];
		str_len++;
	}
	str[str_len] = '\0';
	return (str);
}

/*
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
return: The new string. NULL if the allocation fails.
*/