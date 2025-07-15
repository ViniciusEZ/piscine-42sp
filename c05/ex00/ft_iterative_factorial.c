/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfirmino <vfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:30:56 by vfirmino          #+#    #+#             */
/*   Updated: 2025/06/10 10:49:43 by vfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb == 1)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	factorial = 1;
	while (nb >= 1)
	{
		factorial *= nb;
		nb -= 1;
	}
	return (factorial);
}
