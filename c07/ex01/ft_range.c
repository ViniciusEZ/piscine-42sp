/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfirmino <vfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:36:10 by vfirmino          #+#    #+#             */
/*   Updated: 2025/06/16 13:17:18 by vfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_fill_array(int *array, int size, int min, int max)
{
	int	i;

	i = 0;
	if (min < max)
	{
		while (i < size)
		{
			array[i] = min + i;
			i++;
		}
	}
}

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;

	size = max - min;
	if (size < 0)
	{
		size *= -1;
	}
	array = (int *)malloc(size * sizeof(int));
	if (!array || (min > max) || (min == max))
	{
		return (NULL);
	}
	if (size == 1)
	{
		array[0] = min;
		return (array);
	}
	ft_fill_array(array, size, min, max);
	return (array);
}
