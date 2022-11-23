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

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*aux;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		aux = ft_lstlast(*lst);
		aux->next = new;
	}
}
