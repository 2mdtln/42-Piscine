/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:27:55 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/17 23:16:03 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;
	unsigned int	y;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	x = j;
	y = 0;
	while (src[y])
		y++;
	if (size == 0 || size <= x)
		return (y + size);
	while (i < size - x - 1 && src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = 0;
	return (x + y);
}
