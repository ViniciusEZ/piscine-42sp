/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdwolfgang <sdwolfgang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 10:15:53 by sdwolfgang        #+#    #+#             */
/*   Updated: 2025/05/29 10:24:11 by sdwolfgang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_is_negative(int n)
{
        char    positive;
        char    negative;
        
        positive = 'P';
        negative = 'N';
        if (n >= 0)
                write(1, &positive, 1);
        else
                write(1, &negative, 1);
}

int main()
{
        ft_is_negative(0);
        return (0);
}