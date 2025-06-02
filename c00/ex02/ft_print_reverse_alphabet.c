/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdwolfgang <sdwolfgang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 10:09:49 by sdwolfgang        #+#    #+#             */
/*   Updated: 2025/06/02 08:13:43 by sdwolfgang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
        char    z;

        z = 'z';
        while (z >= 'a')
        {
            write(1, &z, 1);
            z--;
        }
}