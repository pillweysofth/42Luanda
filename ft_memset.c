/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:02:58 by pgomes            #+#    #+#             */
/*   Updated: 2024/05/16 11:10:08 by pgomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t num)
{
	unsigned char	*pt;

	pt = (unsigned char *)ptr;
	while (num > 0)
	{
		pt[num - 1] = val;
		num--;
	}
	return (pt);
}
