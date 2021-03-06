/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsandor- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 22:29:34 by lsandor-          #+#    #+#             */
/*   Updated: 2019/03/03 22:11:41 by lsandor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_mandelbrot(t_args *a)
{
	t_helper h;

	h.x = -1;
	h.iter = a->m->iter;
	while (++h.x < W_WIDTH)
	{
		h.zx = (h.x - a->m->x0) * a->m->sc_w - a->m->offx_h - a->m->x1;
		h.z.x = h.zx;
		h.z.y = a->zy;
		h.z_2.x = h.z.x * h.z.x;
		h.z_2.y = h.z.y * h.z.y;
		h.i = -1;
		while ((++h.i < a->m->iter) && (h.z_2.x + h.z_2.y) < 4)
		{
			h.z.y = 2 * h.z.x * h.z.y + a->zy;
			h.z.x = h.z_2.x - h.z_2.y + h.zx;
			h.z_2.x = h.z.x * h.z.x;
			h.z_2.y = h.z.y * h.z.y;
		}
		if (h.i != a->m->iter)
			*(int *)(a->m->add_ptr + (h.x + a->y * W_WIDTH) * 4) =
				ft_clr(&h, a->m->set);
	}
}
