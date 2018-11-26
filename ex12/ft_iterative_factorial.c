/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:08:16 by ohachim           #+#    #+#             */
/*   Updated: 2018/10/03 16:17:46 by ohachim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int tmp;

	if (nb == 0)
		return (1);
	if (nb > 12 || nb < 0)
		return (0);
	tmp = nb - 1;
	while (tmp > 0)
	{
		nb = nb * tmp;
		tmp--;
	}
	return (nb);
}
