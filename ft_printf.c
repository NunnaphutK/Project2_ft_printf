/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:36:39 by nkiticha          #+#    #+#             */
/*   Updated: 2023/11/23 16:26:50 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_checktype(int arg, const char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_printf_c((int)arg);
	else if (c == 'p')
		i += ft_printf_p((unsigned long long)arg);
	else if (c == 'd' || c == 'i')
		i += ft_printf_di((int)arg);
	else if (c == 'u')
		i += ft_printf_u((unsigned int)arg);
	else if (c == 'x')
		i += ft_printf_x((unsigned int)arg);
	else if (c == 'X')
		i += ft_printf_bx((unsigned int)arg);
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
			if (str[i + 1] == 's')
				cnt += ft_printf_s(va_arg(arg, char *));
			else if (str[i + 1] == '%')
				cnt += ft_printf_c('%');
			else
				cnt += ft_checktype(va_arg(arg, int), str[i + 1]);
			i++;
		}
		else
			cnt += ft_printf_c(str[i]);
		i++;
	}
	va_end(arg);
	return (cnt);
}
