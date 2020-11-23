/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whector <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:41:09 by whector           #+#    #+#             */
/*   Updated: 2020/10/29 20:37:22 by whector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const	char *src, size_t dstsize)
/*{
	size_t	i;
	size_t	n;
	size_t	length_dst;
	size_t	length_src;

	length_dst = 0;
	length_src = 0;
	while (dst[length_dst])
		length_dst++;
	while (src[length_src])
		length_src++;
	i = length_dst;
	n = 0;
	if (dstsize != 0)
	{
		while (src[n] && i < dstsize - length_dst - 1)
			dst[i++] = src[n++];
		dst[i] = '\0';
	}
	return (length_dst + length_src);
}*/
{
	char *d;
	const char *s;
	size_t n;
	size_t dlen;
	size_t length_src;

	n = dstsize;
	d = dst;
	s = src;	
	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = dstsize - dlen;

	length_src = 0;
	while (src[length_src])
		length_src++;

	if (n == 0)
		return(dlen + length_src);
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));	/* count does not include NUL */
}
