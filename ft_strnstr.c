/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whector <whector@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:07:04 by whector           #+#    #+#             */
/*   Updated: 2020/11/07 07:30:18 by whector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_str(const char *str)
{
	char	*to_find;

	to_find = (char *)str;
	while (*to_find)
		to_find++;
	return ((size_t)to_find - (size_t)str);
}

static int		check_find_str(char *str, char *to_find)
{
	char	*tmp;
	int		flag;

	if (*str == *to_find)
	{
		tmp = str;
		flag = 1;
		while (*to_find && flag)
		{
			if (*tmp++ != *to_find++)
				flag = 0;
		}
		if (flag && *to_find == '\0')
			return (1);
	}
	return (0);
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*str;
	size_t	len_l;

	str = (char *)big;
	if (*little == '\0')
		return (str);
	len_l = len_str(little);
	while (*str && len-- >= len_l)
	{
		if (check_find_str(str, (char *)little))
			return (str);
		str++;
	}
	return (NULL);
}
