/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <othmanehachim@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 11:46:24 by ohachim           #+#    #+#             */
/*   Updated: 2018/10/04 20:28:48 by ohachim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*tab;
	int start;
	int range;

	if (min >= max)
		return (0x0);
	start = 0;
	range = max - min;
	tab = (int*)malloc(sizeof(int) * range);
	while (start < range)
	{
		tab[start] = min;
		start++;
		min++;
	}
	return (tab);
}
