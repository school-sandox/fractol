/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 17:38:43 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/09 18:27:03 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	print_help(void)
{
	ft_putendl("Usage: ./fractol <name>");
	ft_putendl(NULL);
	ft_putendl("Mandelbrot, Julia, Burning Ship, Mandelbar");
}

void	terminate(char *s)
{
	ft_putendl_fd(s, 2);
	exit(0);
}
