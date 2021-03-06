/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_fractals.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsandor- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 21:38:10 by lsandor-          #+#    #+#             */
/*   Updated: 2019/03/03 22:12:18 by lsandor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_random_fractal_two(t_args *a)
{
	t_helper h;

	h.x = -1;
	h.iter = a->m->iter;
	while (++h.x < W_WIDTH)
	{
		h.zx = (h.x - a->m->x0) * a->m->sc_w - a->m->offx_h - a->m->x1;
		h.z.x = h.zx;
		h.z.y = a->zy;
		h.i = -1;
		while ((++h.i <= a->m->iter) && (h.z.x * h.z.x + h.z.y * h.z.y) < 20)
		{
			h.xtemp = h.z.x * h.z.x - h.z.y * h.z.y;
			h.z.y = tan(2 * h.z.x * h.z.y - 0.4225);
			h.z.x = h.xtemp + 0.259;
		}
		h.z_2.y = h.z.y * h.z.y;
		h.z_2.x = h.z.x * h.z.x;
		if (h.i != a->m->iter)
			*(int *)(a->m->add_ptr + (h.x + a->y * W_WIDTH) * 4) =
				ft_clr(&h, a->m->set);
	}
}

void	ft_random_fractal_three(t_args *a)
{
	t_helper h;

	h.x = -1;
	h.iter = a->m->iter;
	while (++h.x < W_WIDTH)
	{
		h.zx = (h.x - a->m->x0) * a->m->sc_w - a->m->offx_h - a->m->x1;
		h.z.x = h.zx;
		h.z.y = a->zy;
		h.i = -1;
		while ((++h.i <= a->m->iter) && (h.z.x * h.z.x + h.z.y * h.z.y) < 4)
		{
			h.xtemp = h.z.x * h.z.x - h.z.y * h.z.y;
			h.z.y = log2(2 * h.z.x * h.z.y + 1.110905);
			h.z.x = h.xtemp + 0.437077;
		}
		h.z_2.y = h.z.y * h.z.y;
		h.z_2.x = h.z.x * h.z.x;
		if (h.i != a->m->iter)
			*(int *)(a->m->add_ptr + (h.x + a->y * W_WIDTH) * 4) =
				ft_clr(&h, a->m->set);
	}
}

void	ft_random_fractal_four(t_args *a)
{
	t_helper h;

	h.x = -1;
	h.iter = a->m->iter;
	while (++h.x < W_WIDTH)
	{
		h.zx = (h.x - a->m->x0) * a->m->sc_w - a->m->offx_h - a->m->x1;
		h.z.x = h.zx;
		h.z.y = a->zy;
		h.i = -1;
		while ((++h.i <= a->m->iter) && (h.z.x * h.z.x + h.z.y * h.z.y) < 4)
		{
			h.xtemp = h.z.x * h.z.x - h.z.y * h.z.y;
			h.z.y = log2(2 * h.z.x * h.z.y + 0.556250);
			h.z.x = log2(h.xtemp + 0.357000);
		}
		h.z_2.y = h.z.y * h.z.y;
		h.z_2.x = h.z.x * h.z.x;
		if (h.i != a->m->iter)
			*(int *)(a->m->add_ptr + (h.x + a->y * W_WIDTH) * 4) =
				ft_clr(&h, a->m->set);
	}
}

void	ft_random_fractal_five(t_args *a)
{
	t_helper h;

	h.x = -1;
	h.iter = a->m->iter;
	while (++h.x < W_WIDTH)
	{
		h.zx = (h.x - a->m->x0) * a->m->sc_w - a->m->offx_h - a->m->x1;
		h.z.x = h.zx;
		h.z.y = a->zy;
		h.i = -1;
		while ((++h.i <= a->m->iter) && (h.z.x * h.z.x + h.z.y * h.z.y) < 4)
		{
			h.xtemp = h.z.x * h.z.x - h.z.y * h.z.y;
			h.z.y = h.z.x * h.z.y * h.z.y + 0.943452;
			h.z.x = h.xtemp + h.z.x * 0.424423;
		}
		h.z_2.y = h.z.y * h.z.y;
		h.z_2.x = h.z.x * h.z.x;
		if (h.i != a->m->iter)
			*(int *)(a->m->add_ptr + (h.x + a->y * W_WIDTH) * 4) =
				ft_clr(&h, a->m->set);
	}
}
