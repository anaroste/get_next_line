/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 14:47:11 by anaroste          #+#    #+#             */
/*   Updated: 2017/12/15 12:27:06 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*ptr2;

	if (!(ptr2 = malloc(size)))
		return (NULL);
	ptr2 = ft_memcpy(ptr2, ptr, ft_strlen((char*)ptr));
	ft_memdel(&ptr);
	return (ptr2);
}
