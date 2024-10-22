/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda <reda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:40:39 by reda              #+#    #+#             */
/*   Updated: 2024/10/22 01:20:27 by reda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    while (n > 0)
    {
        *((unsigned char *) s) = 0;
        n--;
    }
}

int main()
{
    int arr[5];

    ft_bzero(arr, sizeof(arr));
    int i;
    while (i < 5)
    {
        printf("%d ", arr[i]);
        i++;
    }
}