/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 18:07:48 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/08 21:27:12 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	char	*start;
	char	*end;
	char	c;

	if (s)
	{
		start = s;
		end = s + (ft_strlen(s) - 1);
		while (start < end)
		{
			c = *start;
			*start++ = *end;
			*end-- = c;
		}
	}
	return (s);
}
