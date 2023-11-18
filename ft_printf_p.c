/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:46:03 by nkiticha          #+#    #+#             */
/*   Updated: 2023/11/18 13:54:18 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_p_p(unsigned long n)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n > 15)
		ft_p_p(n / 16);
	n = n % 16;
	write(1, &base[n], 1);
}

int	ft_printf_p(unsigned long n)
{
	int	size;

    write(1, "0x", 2);
	ft_p_p(n);
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