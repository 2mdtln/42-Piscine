/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 09:06:03 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/17 13:55:04 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	z;

	z = 0;
	while (src[z])
	{
		dest[z] = src[z];
		z++;
	}
	dest[z] = '\0';
	return (dest);
}
