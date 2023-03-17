/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:19:53 by justinmorne       #+#    #+#             */
/*   Updated: 2023/03/17 14:03:13 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../include/graphic_engine.h"


void render_color_buffer ( void )
{
    GATA
    
    if (SDL_UpdateTexture(data->color_buffer_texture, NULL, data->color_buffer, (data->w_win * sizeof(u_int32_t))))
        ft_error("SDL UPDATE TEXTURE FAILED");
    if (SDL_RenderCopy(data->renderer,  data->color_buffer_texture, NULL, NULL))
        ft_error("SDL RENDER COPY FAILED");
}

void clear_color_buffer ( u_int32_t color)
{
    GATA
    
    for (u_int32_t i = 0; i < data->n_pixel; i++)
        data->color_buffer[i] = color;
}

void render_win( void )
{
    GATA
    
    
    if (SDL_SetRenderDrawColor(data->renderer, 255, 100, 0, 255))
        ft_error("SDL SET RENDER DRAW COLOR FAILED");
    if (SDL_RenderClear(data->renderer))
        ft_error("SDL RENDER CLEAR FAILED");
    clear_color_buffer(0xf2cf32);
    render_color_buffer();
    SDL_RenderPresent(data->renderer);

    
}