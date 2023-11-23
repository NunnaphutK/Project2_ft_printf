/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:46:58 by nkiticha          #+#    #+#             */
/*   Updated: 2023/11/23 15:47:52 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_p_u(unsigned int n)
{
	char	x;

	if (n > 9)
		ft_p_u(n / 10);
	n = n % 10;
	x = n + '0';
	write(1, &x, 1);
}

int	ft_printf_u(unsigned int n)
{
	int	size;

	ft_p_u(n);
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
