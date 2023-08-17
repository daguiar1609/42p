/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:35:35 by daguiar-          #+#    #+#             */
/*   Updated: 2023/08/17 17:45:14 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "../include/window.h"

int	main(void)
{
	t_win	win;
	t_img	image;

	win = new_program(300, 300, "Hello World");
	if (!win.mlx_ptr || !win.win_ptr)
		return (1);
	image = new_img(300, 300, win);
	{
		put_pixel_img(image, 150, 150, 0x00FFFFFF);
		mlx_put_image_to_window(image.win.mlx_ptr, image.win.win_ptr, image.img_ptr, 0, 0);
	}
	mlx_hook(win.win_ptr, 17, 0, exit_w, &win);
	mlx_loop(win.mlx_ptr);
	return (0);
}
