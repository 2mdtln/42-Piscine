/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com.tr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:27:35 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/17 19:43:11 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*x;

	x = dest;
	while (*x)
		x++;
	while (*src)
	{
		*x = *(unsigned char *)src;
		src++;
		x++;
	}
	*x = 0;
	return (dest);
}
