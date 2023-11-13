/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:11:21 by nkiticha          #+#    #+#             */
/*   Updated: 2023/11/13 14:15:43 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_p_di(int n)
{
	char	x;

	if (n < 0 && n > -10)
		write(1, "-", 1);
	else if (n > 9 || n < -9)
		ft_printf_di(n / 10);
	n = n % 10;
	if (n < 0)
		n = -n;
	x = n + '0';
	write(1, &x, 1);
}

int	ft_printf_di(int n)
{
	int	size;

	ft_p_di(n);
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
