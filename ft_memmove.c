/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda <reda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:45:32 by reda              #+#    #+#             */
/*   Updated: 2024/10/22 21:27:06 by reda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *dest_ptr;
    unsigned char   *src_ptr;

    if (!dest && !src)
        return (NULL);
    dest_ptr = (unsigned char *) dest;
    src_ptr = (unsigned char *) src;
    
    if (dest_ptr > src_ptr)
    {
        while (n-- > 0)
        {
            dest_ptr[n] = src_ptr[n];
        }
    }
    else {
        return (ft_memcpy(dest, src, n));
    }
    return (dest);
}

// int main() {
//     char src[20]="abcdef";
//     ft_memmove(src+2,src,4);
//     printf("%s", src);
//     return 0;
// }