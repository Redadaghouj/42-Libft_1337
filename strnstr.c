/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda <reda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:26:13 by reda              #+#    #+#             */
/*   Updated: 2024/10/23 13:11:29 by reda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (little[0] == '\0')
        return ((char *) big);
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        while (big[i + j] == little[j] && i + j < len)
        {
            if (little[j + 1] == '\0')
                return ((char *) &big[i]);
            j++;
        }
        i++;
    }
    return (0);
}
