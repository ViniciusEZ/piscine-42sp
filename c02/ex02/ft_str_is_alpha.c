/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfirmino <vfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:07:09 by vfirmino          #+#    #+#             */
/*   Updated: 2025/06/03 12:22:16 by vfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	ascii_value;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		ascii_value = str[i];
		if ((ascii_value >= 65 && ascii_value <= 90) || (ascii_value >= 97
				&& ascii_value <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}
