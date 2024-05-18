/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:03:02 by pgomes            #+#    #+#             */
/*   Updated: 2024/05/16 12:15:35 by pgomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t size)
{
	unsigned char	*p;

	p = (unsigned char *) ptr;
	while (size--)
	{
		if (*p == (unsigned char)value)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
