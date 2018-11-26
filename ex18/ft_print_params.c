/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <othmanehachim@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 17:21:53 by ohachim           #+#    #+#             */
/*   Updated: 2018/10/03 17:33:59 by ohachim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int cn;

	cn = 0;
	while (str[cn] != '\0')
	{
		ft_putchar(str[cn]);
		cn++;
	}
}

int		main(int argc, char **argv)
{
	int w;

	w = 1;
	while (w < argc)
	{
		ft_putstr(argv[w]);
		ft_putchar('\n');
		w++;
	}
	return (0);
}
