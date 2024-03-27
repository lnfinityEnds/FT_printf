/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayala-b <jayala-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:45:08 by jayala-b          #+#    #+#             */
/*   Updated: 2023/11/30 18:45:22 by jayala-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

static int	type_var(const char *tsr, void *arg, size_t c)
{
	int	i;

	i = 0;
	if (*str == 'c')
		i += ft_putchar((int)arg);
	else if (*str == 's')
		i += ft_putstr((char *)arg);
	else if (*str == 'p')
		i += putptr((unsigned long)arg);
	else if (*str == 'd')
		i + = put_int((int)arg);
	else if (*str == 'i')
		i + = put_int((int)arg);
	else if (*str == 'u')
		i += put_unsigned((unsigned int) arg);
	else if (*str == 'x')
		i + = ft_puthex(arg, i, X_LOW);
	else if (*str == 'X')
		i + = ft_puthex(arg, i, X_UE);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;

	i = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (ft_strchr("cspdiuxX", *str))
				i += check_type(str, va_arg(args, void *), i);
			else if (*str == '%')
				i += print_char('%');
		}
		else
			i = i + ft_putchar(*str);
		str++;
	}
}
