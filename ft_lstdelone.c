/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whector <whector@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:31:34 by whector           #+#    #+#             */
/*   Updated: 2020/11/06 12:45:52 by whector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*head;

	if (lst != NULL && del != NULL)
	{
		head = lst->next;
		(*del)(lst->content);
		free(lst);
		lst = head;
	}
}
