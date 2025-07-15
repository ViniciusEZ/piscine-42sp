/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfirmino <vfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:59:41 by vfirmino          #+#    #+#             */
/*   Updated: 2025/06/18 12:56:29 by vfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = (char *)malloc(i * sizeof(char) + 1);
	if (!dest)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*buffer;
	t_stock_str	*res;
	int			i;

	i = 0;
	buffer = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!buffer)
	{
		return (NULL);
	}
	res = buffer;
	while (i < ac)
	{
		buffer->size = ft_strlen(*av);
		buffer->str = *av;
		buffer->copy = ft_strdup(*av);
		av++;
		buffer++;
		i++;
	}
	buffer->str = 0;
	return (res);
}
