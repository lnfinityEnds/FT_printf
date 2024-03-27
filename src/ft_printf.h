/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayala-b <jayala-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:49:07 by jayala-b          #+#    #+#             */
/*   Updated: 2023/11/30 18:49:09 by jayala-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
// librerias
# include <stdarg.h>


# define TYPE "cspdiuxX%"

# define X_LOW "0123456789abcdef"

# define X_UPE "0123456789ABCDEF"

void	ft_putptr(void *ptr);
void	ft_putnbr_fd(int nb);
int		put_int(int n);


#endif
