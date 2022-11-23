/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <contact@nrsfernandes.pt>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:46:03 by nrafael-          #+#    #+#             */
/*   Updated: 2022/11/23 14:46:03 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*s1, const void	*s2, size_t	n)
{
	char		*dst;
	const char	*src;

	if (s1 == s2)
		return (s1);
	dst = (char *)s1;
	src = (const char *)s2;
	while (n--)
	{
		*dst++ = *src++;
	}
	return (s1);
}
