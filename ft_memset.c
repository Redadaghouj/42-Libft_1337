/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda <reda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:03:48 by reda              #+#    #+#             */
/*   Updated: 2024/10/22 00:50:07 by reda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *ptr;
    
    ptr = (unsigned char *) s;
    while (n > 0)
    {
        *(ptr++) = (unsigned char) c;
        n--;
    }
    return (s);
}
