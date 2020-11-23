/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whector <whector@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:41:09 by whector           #+#    #+#             */
/*   Updated: 2020/11/06 12:33:29 by whector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;
	t_list	*tmp;

	if (*lst != NULL && del != NULL)
	{
		head = *lst;
		(*del)(head->content);
		head = head->next;
		free(*lst);
		while (head != NULL)
		{
			tmp = head->next;
			(*del)(head->content);
			free(head);
			head = tmp;
		}
		*lst = NULL;
	}
}
