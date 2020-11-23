/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whector <whector@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:46:36 by whector           #+#    #+#             */
/*   Updated: 2020/11/06 16:36:53 by whector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	unsigned char	*t_src;
	unsigned char	*t_dst;

	if ((dst == NULL && len == 0) || (dst == NULL && src == NULL))
		return (NULL);
	t_dst = (unsigned char *)dst;
	t_src = (unsigned char *)src;
	while (len-- != 0)
	{
		if (*t_src == (unsigned char)c)
		{
			*t_dst++ = *t_src;
			return ((void *)t_dst);
		}
		*t_dst++ = *t_src++;
	}
	return (NULL);
}
