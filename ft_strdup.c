/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whector <whector@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:56:32 by whector           #+#    #+#             */
/*   Updated: 2020/11/06 15:12:02 by whector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*src;
	size_t	len;
	char	*dst;
	char	*strcp;

	len = ft_strlen(str);
	src = (char *)str;
	dst = (char *)malloc(len + 1);
	if (NULL == dst)
		return (NULL);
	strcp = dst;
	while (len-- != 0)
		*strcp++ = *src++;
	*strcp = '\0';
	return (dst);
}
