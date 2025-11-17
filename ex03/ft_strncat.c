/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:27:42 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/17 23:14:52 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	a;

	x = 0;
	a = 0;
	while (dest[x])
		x++;
	while (src[a] && a < nb)
	{
		dest[x + a] = src[a];
		a++;
	}
	dest[x + a] = 0;
	return (dest);
}
