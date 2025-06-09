/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdwolfgang <sdwolfgang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 10:11:37 by sdwolfgang        #+#    #+#             */
/*   Updated: 2025/06/09 10:36:36 by sdwolfgang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;
	unsigned int	remaining;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	if (size <= dlen)
	{
		return (slen + size);
	}
	remaining = size - dlen - 1;
	while (src[i] != '\0' && i < remaining)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (slen + dlen);
}
