/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfirmino <vfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:39:50 by vfirmino          #+#    #+#             */
/*   Updated: 2025/06/04 13:38:08 by vfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	capitalize(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if ((str[i - 1] < 'A' || str[i - 1] > 'Z') && (str[i - 1] < 'a' || str[i
					- 1] > 'z') && (str[i - 1] < '0' || str[i - 1] > '9'))
		{
			str[i] = str[i] - 32;
		}
	}
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		if ((str[i - 1] >= 'A' && str[i - 1] <= 'Z') || (str[i - 1] >= 'a'
				&& str[i - 1] <= 'z') || (str[i - 1] >= '0' && str[i
					- 1] <= '9'))
		{
			str[i] = str[i] + 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		capitalize(str, i);
		i++;
	}
	return (str);
}
