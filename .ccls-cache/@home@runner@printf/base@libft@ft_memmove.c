/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <contact@nrsfernandes.pt>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:32:47 by nrafael-          #+#    #+#             */
/*   Updated: 2022/11/23 13:32:48 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*s1, const void	*s2, size_t	n)
{
	char		*dst;
	const char	*src;

	if (!s1 && !s2)
		return (NULL);
	dst = (char *)s1;
	src = (const char *)s2;
	if (dst < src)
		ft_memcpy(dst, src, n);
	else
	{
		while (n--)
			dst[n] = src[n];
	}
	return (s1);
}
