/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whector <whector@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 10:15:20 by whector           #+#    #+#             */
/*   Updated: 2020/11/06 14:43:39 by whector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*result;

	result = (unsigned char *)dest;
	if (len > 0)
	{
		while (len-- != 0)
			*result++ = c;
	}
	return (dest);
}
