/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whector <whector@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:50:12 by whector           #+#    #+#             */
/*   Updated: 2020/11/06 16:26:57 by whector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	char	*tmp;

	if (s == NULL)
		return (NULL);
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	if (start < ft_strlen(s))
	{
		tmp = res;
		while (s[start] && len-- != 0)
			*tmp++ = s[start++];
		*tmp = '\0';
	}
	else
		res[0] = '\0';
	return (res);
}
