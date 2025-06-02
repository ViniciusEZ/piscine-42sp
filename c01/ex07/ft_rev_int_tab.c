/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdwolfgang <sdwolfgang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 09:09:59 by sdwolfgang        #+#    #+#             */
/*   Updated: 2025/06/02 09:28:53 by sdwolfgang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
        int i;
        int temp;
        i = 0;

        while (i < size/2)
        {
            temp = tab[i];
            tab[i] = tab[size-i-1];
            tab[size-i-1] = temp;
            i++;
        }
}


void main()
{
    int teste[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    int i;
    i = 0;
    int size = sizeof(teste) / sizeof(teste[0]);
    ft_rev_int_tab(teste, size);
    
    while (i < size)
    {
        printf("%d ", teste[i]);
        i++;
    }
}