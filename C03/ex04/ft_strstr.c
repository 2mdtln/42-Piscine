/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:27:49 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/17 23:14:54 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	y;
	int	x;

	y = 0;
	x = 0;
	if (to_find[x] == 0)
		return (str);
	while (str[y])
	{
		while (str[y + x] == to_find[x] && str[y + x] != 0)
			x++;
		if (to_find[x] == 0)
			return (str + y);
		y++;
		x = 0;
	}
	return (0);
}
