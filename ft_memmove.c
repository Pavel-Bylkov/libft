/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whector <whector@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:56:20 by whector           #+#    #+#             */
/*   Updated: 2020/11/06 14:37:57 by whector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*srcp;

	if (src == dst)
		return (dst);
	ptr = (unsigned char *)dst;
	srcp = (unsigned char *)src;
	if ((dst == NULL && len == 0) || (dst == NULL && src == NULL))
		return (NULL);
	if ((size_t)srcp < (size_t)dst && (size_t)srcp + len >= (size_t)dst)
	{
		ptr = ptr + len - 1;
		srcp = srcp + len - 1;
		while (len-- != 0)
			*ptr-- = *srcp--;
		return (dst);
	}
	while (len-- != 0)
		*ptr++ = *srcp++;
	return (dst);
}
