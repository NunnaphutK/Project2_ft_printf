/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:20:11 by nkiticha          #+#    #+#             */
/*   Updated: 2023/11/18 13:52:03 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_p_bx(unsigned int n)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n > 15)
		ft_p_bx(n / 16);
	n = n % 16;
	write(1, &base[n], 1);
}

int	ft_printf_bx(unsigned int n)
{
	int	size;

	ft_p_bx(n);
	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 16;
		size++;
	}
	return (size);
}