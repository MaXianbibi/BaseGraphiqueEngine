/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:16:52 by justinmorne       #+#    #+#             */
/*   Updated: 2023/03/17 14:00:26 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/graphic_engine.h"

static void setup_window( void )
{
	GATA

	data->color_buffer_texture = SDL_CreateTexture(data->renderer, SDL_PIXELFORMAT_ABGR8888, SDL_TEXTUREACCESS_STREAMING, data->w_win, data->h_win );
	if (!data->color_buffer_texture)
		ft_error("SDL CREATE TEXTURE FAILED");
}

static void init_data( void )
{
	t_data * data = getData();
	if (!data)
		exit (1);
	data->is_running = init_win();	
	if (!data->is_running)
		ft_exit (1);
	setup_window();
}

int main ( void )
{	
	init_data();
	loop_win();
	freeData();
}