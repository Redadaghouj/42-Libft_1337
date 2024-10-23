/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda <reda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:25:34 by reda              #+#    #+#             */
/*   Updated: 2024/10/23 11:25:43 by reda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    int i;
    int j;

    i = 0;
    if (haystack[i] == '\0')
        return ((char *) haystack);
    while (haystack[i] != '\0')
    {
        j = 0;
        while (haystack[i + j] == needle[j])
        {
            if (needle[j + 1] == '\0')
                return ((char *) &haystack[i]);
            j++;
        }
        i++;
    }
    return (0);
}