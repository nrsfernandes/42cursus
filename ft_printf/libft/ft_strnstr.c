/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <contact@nrsfernandes.pt>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:48:47 by nrafael-          #+#    #+#             */
/*   Updated: 2022/11/23 14:48:47 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*s1, const char	*s2, size_t	len)
{
	size_t	i;
	size_t	j;
	size_t	s2_len;

	s2_len = ft_strlen(s2);
	if (!s2_len)
		return ((char *)s1);
	i = 0;
	while (s1[i] && (i + s2_len <= len))
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while (s1[i + j] && s2[j])
			{
				if (s1[i + j] != s2[j])
					break ;
				else if (j == s2_len - 1)
					return ((char *)s1 + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
