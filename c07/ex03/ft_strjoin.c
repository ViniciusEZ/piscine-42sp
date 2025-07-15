/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfirmino <vfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:17:58 by vfirmino          #+#    #+#             */
/*   Updated: 2025/06/16 16:00:21 by vfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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

int	ft_total_strlen(char **strs, char *sep, int size)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		total_len += ft_strlen(sep);
		i++;
	}
	total_len -= ft_strlen(sep);
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;
	char	*dest;
	int		total_len;

	if (size == 0)
		return ((char *)malloc(1));
	total_len = ft_total_strlen(strs, sep, size);
	res = (char *)malloc((total_len + 1) * sizeof(char));
	if (!res)
		return (0);
	i = -1;
	dest = res;
	while (++i < size)
	{
		ft_strcpy(res, strs[i]);
		res += ft_strlen(strs[i]);
		if (i < (size - 1))
		{
			ft_strcpy(res, sep);
			res += ft_strlen(sep);
		}
	}
	res[total_len] = '\0';
	return (dest);
}
