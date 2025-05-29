/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdwolfgang <sdwolfgang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 10:09:49 by sdwolfgang        #+#    #+#             */
/*   Updated: 2025/05/29 10:23:31 by sdwolfgang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
        char    z;

        for (z = 'z'; z >= 'a'; z--)
        {
            write(1, &z, 1);
        }
}

// int main()
// {   
//     ft_print_reverse_alphabet();
//     return (0);
// }