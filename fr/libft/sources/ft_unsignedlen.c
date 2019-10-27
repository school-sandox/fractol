/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:24:00 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/08 21:25:56 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_unsignedlen(uintmax_t number, unsigned int base)
{
	size_t	size;

	if (base >= 2)
	{
		size = 1;
		while ((number /= base))
			size++;
	}
	else
		size = 0;
	return (size);
}
