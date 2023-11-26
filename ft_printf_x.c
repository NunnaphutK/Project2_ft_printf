/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:47:10 by nkiticha          #+#    #+#             */
/*   Updated: 2023/11/26 17:56:40 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_p_x(unsigned int n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n > 15)
		ft_p_x(n / 16);
	n = n % 16;
	if (write(1, &base[n], 1) == -1)
		return (-1);
	return (0);
}

int	ft_printf_x(unsigned int n)
{
	int	size;

	if (ft_p_x(n) == -1)
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
