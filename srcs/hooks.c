/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsandor- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 20:33:57 by lsandor-          #+#    #+#             */
/*   Updated: 2019/02/26 21:00:26 by lsandor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_mouse_press(int button, int x, int y, t_fractol *f)
{
	ft_clear_image(f);
	button == 5 ? f->scale *= 0.9 : 0;
	button == 4 ? f->scale *= 1.1 : 0;
	printf("f->scale=%f\n",f->scale);
	ft_select_fractol(f);
	return (0);
}
