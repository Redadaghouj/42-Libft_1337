/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda <reda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:51:20 by reda              #+#    #+#             */
/*   Updated: 2024/10/23 00:23:29 by reda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  strlcat(char *dst, const char *src, size_t size)
{
    size_t	dst_size;
	size_t	src_size;
	size_t	space_left;
	size_t	i;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	space_left = size - dst_size - 1;
	i = 0;
	if (size == 0 || size <= dst_size)
		return (src_size + size);
	while (i < space_left && src[i] != '\0')
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (dst_size + src_size);
}
