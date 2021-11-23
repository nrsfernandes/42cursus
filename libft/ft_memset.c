/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrafael- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:22:45 by nrafael-          #+#    #+#             */
/*   Updated: 2021/10/21 17:58:23 by nrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;

	a = (char *)b;
	while (len > 0)
	{
		*a++ = (char)c;
		len--;
	}
	return (b);
}
/*
int main()
{
	int LEN;

	LEN = 10;

	char arr[LEN];
	int loop;

	printf("Array elements are (before myMemSet()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	ft_memset(arr,0,LEN);
	printf("Array elements are (after myMemSet()): \n");

	memset(arr,0,LEN);
	printf("original memset\n");

	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	ft_memset(arr,-1,3);
	ft_memset(arr+3,-2,3);
	ft_memset(arr+6,-3,3);

	printf("Array elements are (after myMemSet()): \n");

	memset(arr,-1,3);
	memset(arr+3,-2,3);
	memset(arr+6,-3,3);

	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	return 0;
}*/
