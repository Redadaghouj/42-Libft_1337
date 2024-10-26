/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:23:16 by mdaghouj          #+#    #+#             */
/*   Updated: 2024/10/26 20:25:42 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	curr_dst_size;
	size_t	src_size;
	size_t	space_left;
	size_t	i;

	curr_dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (dstsize == 0)
		return (src_size);
	if (dstsize <= curr_dst_size)
		return (src_size + dstsize);
	space_left = dstsize - curr_dst_size - 1;
	i = 0;
	while (i < space_left && src[i] != '\0')
	{
		dst[curr_dst_size + i] = src[i];
		i++;
	}
	dst[curr_dst_size + i] = '\0';
	return (curr_dst_size + src_size);
}
