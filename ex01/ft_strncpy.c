/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 09:06:18 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/17 13:55:10 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x < n && src[x])
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[n] = '\0';
		x++;
	}
	return (dest);
}
