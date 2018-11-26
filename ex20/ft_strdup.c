/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <othmanehachim@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 11:26:26 by ohachim           #+#    #+#             */
/*   Updated: 2018/10/04 11:53:11 by ohachim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		cn;

	len = 0;
	cn = 0;
	while (src[len])
		len++;
	dest = (char*)malloc(len);
	while (cn < len)
	{
		dest[cn] = src[cn];
		cn++;
	}
	dest[cn] = '\0';
	return (dest);
}
