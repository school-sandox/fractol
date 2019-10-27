/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 06:33:34 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/08 21:28:23 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

intmax_t	ft_pow_int(intmax_t num, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (num * (ft_pow_int(num, power - 1)));
}
