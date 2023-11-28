/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:43:23 by nkiticha          #+#    #+#             */
/*   Updated: 2023/11/26 17:15:20 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf_c(char c);
int	ft_printf_s(char *str);
int	ft_printf_p(unsigned long n);
int	ft_printf_di(int n);
int	ft_printf_u(unsigned int n);
int	ft_printf_x(unsigned int n);
int	ft_printf_bx(unsigned int n);
int	ft_printf(const char *str, ...);

#endif
