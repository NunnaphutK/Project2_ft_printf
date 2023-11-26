/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:46:03 by nkiticha          #+#    #+#             */
/*   Updated: 2023/11/26 17:24:20 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_p_p(unsigned long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n > 15)
		ft_p_p(n / 16);
	n = n % 16;
	if (write(1, &base[n], 1) == -1)
		return (-1);
	return (0);
}

int	ft_printf_p(unsigned long n)
{
	int	size;

	size = 2;
	if (write(1, "0x", 2) == -1)
		return (-1);
	ft_p_p(n);
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 16;
		size++;
	}
	return (size);
}
