/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whector <whector@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:04:07 by whector           #+#    #+#             */
/*   Updated: 2020/11/06 11:58:20 by whector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	unsigned char	*ptr;
	size_t			len;

	len = number * size;
	ptr = (unsigned char*)malloc(len);
	if (NULL == ptr)
		return (NULL);
	ft_bzero(ptr, len);
	return ((void *)ptr);
}
