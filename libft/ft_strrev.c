/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 09:55:18 by anaroste          #+#    #+#             */
/*   Updated: 2017/11/12 21:08:15 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	a;

	i = 0;
	j = 0;
	while (str[i] != 0)
		i++;
	i--;
	while (i > j)
	{
		a = str[i];
		str[i] = str[j];
		str[j] = a;
		i--;
		j++;
	}
	return (str);
}
