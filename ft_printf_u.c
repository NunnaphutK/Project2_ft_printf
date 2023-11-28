/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:46:58 by nkiticha          #+#    #+#             */
/*   Updated: 2023/11/26 17:55:59 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_p_u(unsigned int n)
{
	char	x;

	if (n > 9)
		if (ft_p_u(n / 10) == -1)
			return (-1);
	n = n % 10;
	x = n + '0';
	if (write(1, &x, 1) == -1)
		return (-1);
	return (0);
}

int	ft_printf_u(unsigned int n)
{
	int	size;

	if (ft_p_u(n) == -1)
		return (-1);
	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}
