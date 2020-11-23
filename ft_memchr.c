/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whector <whector@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:15:04 by whector           #+#    #+#             */
/*   Updated: 2020/11/05 14:48:11 by whector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	char_c;

	if ((b == NULL && len == 0))
		return (NULL);
	ptr = (unsigned char*)b;
	char_c = (unsigned char)c;
	while (len-- != 0)
	{
		if (*ptr == char_c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
