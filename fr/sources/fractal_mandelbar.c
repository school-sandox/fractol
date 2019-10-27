/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal_mandelbar.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 20:12:04 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/08 21:33:13 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		iterate_mandelbar(t_fractol *fractol)
{
	int			iteration;
	t_complex	z;

	iteration = 0;
	z = init_complex(fractol->c.re, fractol->c.im);
	while (pow(z.re, 2.0) + pow(z.im, 2.0) <= 4
		&& iteration < fractol->max_iteration)
	{
		z = init_complex(
			pow(z.re, 2.0) - pow(z.im, 2.0) + fractol->c.re,
			-2.0 * z.re * z.im + fractol->c.im);
		iteration++;
	}
	return (iteration);
}
