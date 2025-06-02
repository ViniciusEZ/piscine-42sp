/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdwolfgang <sdwolfgang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 10:05:40 by sdwolfgang        #+#    #+#             */
/*   Updated: 2025/06/02 08:12:27 by sdwolfgang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_print_alphabet(void)
{
    char    a;

    a = 'a';
    while (a <= 'z')
    {
        write(1, &a, 1);
        a++;
    }
}

void main()
{
    ft_print_alphabet();
}