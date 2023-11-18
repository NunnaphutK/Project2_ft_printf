/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:21:34 by nkiticha          #+#    #+#             */
/*   Updated: 2023/11/18 13:41:32 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	// ft_printf("d test = %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// ft_printf("i test = %i %i %i %i %i %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf("Hello %s %s %c %c\n", "eee","aaa",'a', 'b');
	ft_printf("x test = %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("d test = %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("i test = %i %i %i %i %i %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    printf("Hello %s %s %c %c\n", "eee","aaa",'a', 'b');
	printf("x test = %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf("p test = %p %p %p %p %p %p %p\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("p test = %p %p %p %p %p %p %p\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    return 0;
}
// {	
// 	ft_printf("x = %x\n", 0);
// 	ft_printf("x = %x\n", INT_MAX);
// 	ft_printf("x = %x\n", INT_MIN);
// 	ft_printf("x = %x\n", -101);
// 	ft_printf("x = %x\n", 101);
// 	ft_printf("X = %X\n", 0);
// 	ft_printf("X = %X\n", INT_MAX);
// 	ft_printf("X = %X\n", INT_MIN);
// 	ft_printf("X = %X\n", -101);
// 	ft_printf("X = %X\n", 101);
// 	printf("--------------------------------------------\n");
// 	printf("x = %x\n", 0);
// 	printf("x = %x\n", INT_MAX);
// 	printf("x = %x\n", INT_MIN);
// 	printf("x = %x\n", -101);
// 	printf("x = %x\n", 101); }
/*
{	
	ft_printf("i=%i, d=%d\n",INT_MAX,INT_MAX);
	ft_printf("i=%i, d=%d\n",9223372036854775807LL,9223372036854775807LL);
	ft_printf("i=%i, d=%d\n",INT_MIN,INT_MIN);
	ft_printf("i=%i, d=%d\n",LONG_MAX,LONG_MAX);
	ft_printf("i=%i, d=%d\n",LONG_MIN,LONG_MIN);
	ft_printf("i=%i, d=%d\n",UINT_MAX,UINT_MAX);
	ft_printf("i=%i, d=%d\n",ULONG_MAX,ULONG_MAX);
	ft_printf("d test = %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf("i test = %i %i %i %i %i %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("--------------------------------------------\n");
	printf("i=%i, d=%d\n",INT_MAX,INT_MAX);
	printf("i=%i, d=%d\n",9223372036854775807LL,9223372036854775807LL); //lli lld
	printf("i=%i, d=%d\n",INT_MIN,INT_MIN);
	printf("i=%i, d=%d\n",LONG_MAX,LONG_MAX);
	printf("i=%i, d=%d\n",LONG_MIN,LONG_MIN);
	printf("i=%i, d=%d\n",UINT_MAX,UINT_MAX);
	printf("i=%i, d=%d\n",ULONG_MAX,ULONG_MAX);
	printf("d test = %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("i test = %i %i %i %i %i %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("%u\n",INT_MAX);
	printf("%u\n",INT_MIN);
	printf("%u\n",LONG_MAX);
	printf("%u\n",LONG_MIN);
	printf("%u\n",UINT_MAX);
	printf("%u\n",ULONG_MAX);
	printf("%u\n",9223372036854775807LL);
	printf("u test = %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
}	*/
	/*
{
	printf("%p\n",-1);
	printf("%p\n",1);
	printf("%p\n",15);
	printf("%p\n",16);
	printf("%p\n",17);
	printf("%p %p\n", LONG_MIN, LONG_MAX);
	printf("%p %p\n ", INT_MIN, INT_MAX);
	printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	printf(" %p %p ", 0, 0);
	return (0);
}*/	
