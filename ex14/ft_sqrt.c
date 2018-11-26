/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <othmanehachim@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:32:31 by ohachim           #+#    #+#             */
/*   Updated: 2018/10/03 16:32:56 by ohachim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int sroot;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (nb);
	sroot = 0;
	while (sroot <= nb / 2)
	{
		if (sroot * sroot == nb)
			return (sroot);
		sroot++;
	}
	return (0);
}
