/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfirmino <vfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:56:49 by vfirmino          #+#    #+#             */
/*   Updated: 2025/06/12 18:11:40 by vfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*array;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	if (!array)
	{
		*range = 0;
		return (-1);
	}
	*range = array;
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (size);
}
