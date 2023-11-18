/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:46:41 by yaboulan          #+#    #+#             */
/*   Updated: 2023/11/18 13:48:56 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned long nb, int *count)
{
	if (nb > 9)
	{
		ft_putunsigned((nb / 10), count);
		ft_putunsigned(nb % 10, count);
	}
	else
		ft_putchar(nb + 48, count);
}
