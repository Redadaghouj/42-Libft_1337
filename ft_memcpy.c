/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda <reda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:30:44 by reda              #+#    #+#             */
/*   Updated: 2024/10/22 21:06:10 by reda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *ptr;
    unsigned char *src_ptr;

    if (!dest && !src)
        return (dest);
    ptr = (unsigned char *) dest;
    src_ptr = (unsigned char *) src;
    while (n > 0)
    {
        *(ptr++) = *(src_ptr++);
        n--;
    }
    return (dest);
}

// int main() {
//     char s[20]="alightechs";
//     memcpy(s+5,s,7);
//     printf("%s", s);
//     return 0;
// }