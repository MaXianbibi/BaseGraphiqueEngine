/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:19:53 by justinmorne       #+#    #+#             */
/*   Updated: 2023/03/17 21:31:15 by justinmorne      ###   ########.fr       */
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

void draw_grid(void) {
    GATA

    for (u_int32_t i = 0; i < data->h_win; i++)
        for (uint32_t j = 0; j < data->w_win; j++)
        {
            if (!(i % 10) || !(j % 10))
                drawPixel(i, j, 0x101010);
        }

}

void drawPixel(u_int32_t y, u_int32_t x, u_int32_t color)
{
    GATA
    
    if (y >= data->h_win || x >= data->w_win)
        return ;
    data->color_buffer[y * data->w_win + x] = color;
}

void drawRecrangle(u_int32_t posX, u_int32_t posY, u_int32_t w, u_int32_t h, u_int32_t color)
{
    for (u_int32_t i = 0; i < h; i++)
        for (uint32_t j = 0; j < w; j++)
            drawPixel(i + posY, j + posX, color);
}

void project2dMesh ( void )
{
    GATA
    mesh_t * tmp = data->head;

    tmp->pos.x = 500;
    tmp->pos.y = 500;
    
    while (tmp)
    {
        for (u_int32_t j = 0; j < N_POINTS; j++)
            drawRecrangle(tmp->projection[j].x + tmp->pos.x, tmp->projection[j].y + tmp->pos.y, 4, 4, 0x00FFFF);
        tmp = tmp->next;
    }
    
}


void render_win( void )
{
    GATA

    clear_color_buffer(0);
    draw_grid();
    
    project2dMesh();
    
    render_color_buffer();
    SDL_RenderPresent(data->renderer);

    
}