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
# include "../libft/libft.h"
# include <stdarg.h>
# include "ft_printf_utils.c"

typedef struct s_format
{
	char	type;
}	t_format;

# define TYPE "cspdiuxX%"

# define X_LOW "0123456789abcdef"

# define X_UPE "0123456789ABCDEF"

t_format	new_format(void);
#endif
