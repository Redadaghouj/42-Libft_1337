/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda <reda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:33:41 by reda              #+#    #+#             */
/*   Updated: 2024/10/22 21:47:33 by reda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr;
    
    ptr = (unsigned char*) s;
    while (n > 0)
    {
        if (*ptr == (unsigned char) c)
            return (ptr);
        ptr++;
        n--;
    }
    return (NULL);
}

int main()
{
    char *str = "Mohamed Reda Daghouj";
    str = ft_memchr(str, 'M', 8);
    printf("%s", str);
    return 0;
}