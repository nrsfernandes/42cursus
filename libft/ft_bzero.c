/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:47:57 by nrafael-          #+#    #+#             */
/*   Updated: 2021/10/21 17:54:40 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*clean;

	clean = s;
	while (n != 0)
	{
		*clean++ = 0;
		n--;
	}
}
/*
int main( void )
  {
    char buffer[80];
//     bzero( buffer, 80 );
//     return EXIT_SUCCESS;
	ft_bzero(buffer, 80);
	return EXIT_SUCCESS;
  }*/
