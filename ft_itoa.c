/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whector <whector@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:46:21 by whector           #+#    #+#             */
/*   Updated: 2020/11/03 20:46:56 by whector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(char *str, size_t len)
{
	char	*dst;
	char	*strcp;

	dst = (char *)malloc(len + 1);
	if (NULL == dst)
		return (NULL);
	strcp = dst;
	while (len-- != 0)
		*strcp++ = *str++;
	*strcp = '\0';
	return (dst);
}

char		*ft_itoa(int n)
{
	char			*res;
	char			buf[15];
	long long int	nbr;
	size_t			len;

	len = 14;
	nbr = (long long int)n;
	buf[len--] = '\0';
	if (n < 0)
		nbr = -(long long int)n;
	else if (n == 0)
		buf[len--] = '0';
	while (nbr != 0)
	{
		buf[len--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		buf[len--] = '-';
	res = ft_strndup(&buf[len + 1], 13 - len);
	if (res == NULL)
		return (NULL);
	return (res);
}
