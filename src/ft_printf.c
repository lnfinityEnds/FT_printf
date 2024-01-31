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

t_list	*type_var(char type, va_list var)
{
	t_list	*nodo;

	if (type == '%')
		nodo = ft_lstnew ("%");
	else if (type == 'i')
		nodo = ft_lstnew(ft_itoa(va_arg(var,int)));
	else if(type == 'c')
		nodo = ft_lstnew(var);
	else if(type == 's')
		nodo =ft_lstnew(var);
	else
		return (nodo = ft_lstnew("-1"));
	return (nodo);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	t_list	**nodos;
	t_list	*nodo;
	va_list	var;
	char	*first;
	int		i;
	int		pos;

	va_start(var, str);
	pos = 0;
	nodos = NULL;
	i = 0;
	first = NULL;
	count = 0;
	printf("p1\n");
	while (str[i])
	{
		
		if (str[i] == '%')
		{
			i++;
			nodo = type_var(str[i], var);
			first = (nodo->content);
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
