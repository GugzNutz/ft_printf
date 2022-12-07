/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:13:26 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/12/07 17:21:27 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;
	int		var_type;

	i = 0;
	var_type = 0;
	va_start(ap, str);/*inicializa a variavel ap para ser usada na va_arg e va_end macros
	o segundo valor e como se fosse o ultimo argumento a passar pela funcao*/ 
	while (str[i])
	{
		if (str[i] == '%')//antecede a variavel que nos traz o formato(d,s,i,etc)
		{
			var_type = (args, str[i + 1]);/*escrever uma funcao que va buscar a minha lista de funcoes
			a que eu preciso,se for h vai buscar a funcao hexadecimal, i vai buscar integer, etc*/
			i++;
		}
	}

}
