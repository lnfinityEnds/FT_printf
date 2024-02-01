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

t_format	*type_var(char type, va_list var)
{
	t_format	tf ;

	tf = new_format;
	if (type == 'c')
		tf.type = 'c';
	else if (type == 's')
		tf.type = 's';
	else if (type == 'p')
		tf.type = 'p';
	else if (type == 'd')
		tf.type = 'd';
	else if (type == 'i')
		tf.type = 'i';
	else if (type == 'u')
		tf.type = 'u';
	else if (type == 'x')
		tf.type = 'X';
	else if (type == '%')
		tf.type = '%';
	else
		return (nodo = ft_lstnew("-1"));
	return (nodo);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	var;
	char	*first;
	int		i;
	int		pos;

	count = 0;
	va_start(var, str);
	while (*str)
	{
		if (*str == '%')
		{
			ft_putstr_fd(first, 1);
			count++;
		}
		else if (str[i - 1] != '%')
			ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(var);
	printf("%i",count);
	return (count);
}

int main()
{
	ft_printf("hola%i%i\n\n",10, 12);
	printf("\nnormal :hola%%\n");
}
