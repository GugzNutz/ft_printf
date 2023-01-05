/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:09:01 by gfilipe-          #+#    #+#             */
/*   Updated: 2023/01/05 14:16:43 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/*stdarg is the library to use for a variable number of arguments*/
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_prinf(const char *format, ...);

int	main(void)
{
	max(2, 4, 6, 14, 16);
	max(5, 9, 10);
}

int	max(int num_args, ...);
/* va_list indicates a list of variable type */
va_list args;

va_start(args/*name of list*/, num_args/*last argument before this list of some variables*/);
/*run a loop for the number of arguments that we have in va_start
this pulls the last int number one at a time starting at 0*/
for (int i = 0; i < num_args; i++)
{
	int	x = va_arg(args, int);/*args as first argument and then the type of argument we want to pull out next
	we call it int x because it basically pulls out the next argument in the list
	and based ot the type we specified it pulls it out*/
	printf("x: %d\n", x);
}

va_end(args)/*ends my acess to the list of arguments*/
#endif