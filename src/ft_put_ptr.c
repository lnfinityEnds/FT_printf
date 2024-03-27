/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayala-b <jayala-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:32:54 by jayala-b          #+#    #+#             */
/*   Updated: 2024/02/23 18:32:56 by jayala-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *ptr)
{
	char			*str;
	unsigned long	ptr_address;

	ptr_address = (unsigned long)ptr;
	ft_putstr("0x");
	str = ft_code_base(ptr_address, X_LOW);
	ft_putstr(str);
	free(str);
}
