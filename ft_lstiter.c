/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whector <whector@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:55:49 by whector           #+#    #+#             */
/*   Updated: 2020/11/06 12:50:44 by whector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*elem;

	if (lst != NULL && f != NULL)
	{
		elem = lst;
		while (elem != NULL)
		{
			(*f)(elem->content);
			elem = elem->next;
		}
	}
}
