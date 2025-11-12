/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaheri <mtaheri@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:37:10 by mtaheri           #+#    #+#             */
/*   Updated: 2025/11/11 12:27:51 by mtaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

/*
int	main(void)
{
	ft_putstr("İçimde bir ateş yanıyor\n"
	"Bedenim dar gelir oldu\n"
	"Ateşime ister körüklerle gel, ister suyla\n"
	"İstediğin kadar konuş benimle\n"
	"İstediğin kadar yalan söyle\n"
	"Beni ben yapan içimdeki sesleri susturamazsın\n"
	"İçine saklandığın dar dünyayı :)\n"
	"Yeni ve büyük bir dünya mı sandın?\n"
	"İstersen bir aynayla yardım edeyim\n"
	"Ama umursamazsın\n\n"
	"Merak etmeden duramıyorum\n"
	"Geceleri nasıl uyuyorsun?\n"
	"Beni boş ver, kendine cevap ver\n"
	"Lütfen bu kez dürüst olur musun?\n\n"
	"Ben şarkımı söylerken istersen sesi açarsın\n"
	"İstersen kısıp bunu da yok sayarsın\n"
	"Kim bilir; belki gülümser, belki ağlarsın\n"
	"Yüreğimdeki sesleri susturamazsın\n\n"
	"Bir yanım seni hala düşünüyor\n"
	"Bir yanım sana fena kızgın\n"
	"Yalnız sen ve ben biliyoruz olanları, unutturamazsın\n"
	"Sakın nefret ettiğimi düşünme\n"
	"Bende böyle duygular barındıramazsın\n"
	"Geçmiş hiç yaşanmamış gibi davransan da baştan yazamazsın\n\n"
	"Merak etmeden duramıyorum\n"
	"Geceleri nasıl uyuyorsun?\n"
	"Beni boş ver, kendine cevap ver\n"
	"Lütfen bu kez dürüst olur musun?\n\n"
	"Ben şarkımı söylerken istersen sesi açarsın\n"
	"İstersen kısıp bunu da yok sayarsın\n"
	"Kim bilir; belki gülümser, belki ağlarsın\n"
	"Yüreğimdeki sesleri susturamazsın\n");
	return (0);
}
*/