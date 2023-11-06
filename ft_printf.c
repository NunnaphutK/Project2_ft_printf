/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:51:23 by nkiticha          #+#    #+#             */
/*   Updated: 2023/11/06 20:15:19 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return(0);
}

int	ft_checktype(va_list arg, const char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		ft_printf_char(va_arg(arg, int));
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	va_list	arg;

	i = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			ft_checktype(arg, str[i + 1]);
			i++;
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	//printf("fake len=%d\n",ft_printf((void *)0));
	printf("Real len=%d\n",printf("%s",(void *)0));
}*/
