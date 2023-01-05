/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:09:01 by gfilipe-          #+#    #+#             */
/*   Updated: 2023/01/05 13:15:29 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/*stdarg is the library to use for a variable number of arguments*/
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_prinf(const char *format, ...);

int	max(int num_args, ...);

va_list args;

va_start(args, *format);

for (int i = 0; i < num_args; i++)
{
	int	x = va_arg(args, int);
	printf("x: %d\n", x);
}

va_end(args)/*ends my acess to the list of arguments*/
#endif