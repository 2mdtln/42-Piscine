/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:34:57 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/17 13:55:56 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (src[x])
		x++;
	if (size == 0)
		return (x);
	while (src[y] && y < size - 1)
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	return (x);
}
