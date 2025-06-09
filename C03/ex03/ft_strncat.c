/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdwolfgang <sdwolfgang@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 09:26:23 by sdwolfgang        #+#    #+#             */
/*   Updated: 2025/06/09 09:43:30 by sdwolfgang       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ptr;
	unsigned int	i;

	ptr = dest;
	i = 0;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && i < nb)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
