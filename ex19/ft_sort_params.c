/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <othmanehachim@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 17:41:00 by ohachim           #+#    #+#             */
/*   Updated: 2018/10/03 21:35:14 by ohachim          ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int cn;

	cn = 0;
	while (s1[cn] == s2[cn] && s1[cn] != '\0' && s2[cn] != '\0')
		cn++;
	return (s1[cn] - s2[cn]);
}

void	ft_swap_adress(char **s1, char **s2)
{
	char *swapp;

	swapp = *s1;
	*s1 = *s2;
	*s2 = swapp;
}

int		main(int argc, char **argv)
{
	int w;
	int w2;
	int w3;

	w3 = 1;
	w = 0;
	while (w < argc - 1)
	{
		w2 = w + 1;
		while (w2 < argc)
		{
			if (ft_strcmp(argv[w], argv[w2]) > 0)
				ft_swap_adress(&argv[w], &argv[w2]);
			w2++;
		}
		w++;
	}
	while (w3 < argc)
	{
		ft_putstr(argv[w3]);
		ft_putchar('\n');
		w3++;
	}
	return (0);
}
