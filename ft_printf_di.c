/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:11:21 by nkiticha          #+#    #+#             */
/*   Updated: 2023/11/26 17:59:53 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_p_di(int n)
{
	char	x;

	if (n < 0 && n > -10)
		write(1, "-", 1);
	else if (n > 9 || n < -9)
		ft_p_di(n / 10);
	n = n % 10;
	if (n < 0)
		n = -n;
	x = n + '0';
	if (write(1, &x, 1) == -1)
		return (-1);
	return (0);
}

int	ft_printf_di(int n)
{
	int	size;

	if (ft_p_di(n) == -1)
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
