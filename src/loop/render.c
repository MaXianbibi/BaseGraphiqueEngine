/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:19:53 by justinmorne       #+#    #+#             */
/*   Updated: 2023/03/17 13:42:01 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../include/graphic_engine.h"


void render_color_buffer ( void )
{
    GATA
    
    if (SDL_UpdateTexture(data->color_buffer_texture, NULL, data->color_buffer, (WIDTH_WIN * sizeof(u_int32_t))))
        ft_error();
    if (SDL_RenderCopy(data->renderer,  data->color_buffer_texture, NULL, NULL))
        ft_error();
}

void clear_color_buffer ( u_int32_t color)
{
    GATA
    
    for (int i = 0; i < N_PIXEL; i++)
        data->color_buffer[i] = color;
}

void render_win( void )
{
    GATA
    
    
    if (SDL_SetRenderDrawColor(data->renderer, 255, 100, 0, 255))
        ft_error();
    if (SDL_RenderClear(data->renderer))
        ft_error();
    clear_color_buffer(0xf2cf32);
    render_color_buffer();
    SDL_RenderPresent(data->renderer);

    
}