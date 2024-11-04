/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:30:44 by mdaghouj          #+#    #+#             */
/*   Updated: 2024/11/02 21:14:18 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*src_ptr;

	if (!dest && !src)
		return (dest);
	ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	while (n > 0)
	{
		*ptr = *src_ptr;
		ptr++;
		src_ptr++;
		n--;
	}
	return (dest);
}
