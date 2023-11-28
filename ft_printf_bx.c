/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:20:11 by nkiticha          #+#    #+#             */
/*   Updated: 2023/11/26 17:56:59 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_p_bx(unsigned int n)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n > 15)
		if (ft_p_bx(n / 16) == -1)
			return (-1);
	n = n % 16;
	if (write(1, &base[n], 1) == -1)
		return (-1);
	return (0);
}

int	ft_printf_bx(unsigned int n)
{
	int	size;

	if (ft_p_bx(n) == -1)
		return (-1);
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
