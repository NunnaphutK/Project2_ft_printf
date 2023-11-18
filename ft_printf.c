/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:51:23 by nkiticha          #+#    #+#             */
/*   Updated: 2023/11/18 13:54:46 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checktype(va_list arg, const char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_printf_c(va_arg(arg, int));
	else if (c == 's')
		i += ft_printf_s(va_arg(arg, char *));
	//else if (c == 'p')
	//	i += ft_printf_p(va_arg(arg, unsigned long));
	else if (c == 'd' || c == 'i')
			i += ft_printf_di(va_arg(arg, int));
	//else if (c == 'u')
	//	i += ft_printf_u(va_arg(arg, unsigned int));
	else if (c == 'x')
		i += ft_printf_x(va_arg(arg, unsigned int));
	else if (c == 'X')
		i += ft_printf_bx(va_arg(arg, unsigned int));
	else if (c == '%')
		i += ft_printf_c(c);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		cnt;
	va_list	arg;

	i = 0;
	cnt = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			cnt += ft_checktype(arg, str[i + 1]);
			i++;
		}
		else
		{
			cnt += ft_printf_c(str[i]);
		}
		i++;
	}
	va_end(arg);
	return (cnt);
}
