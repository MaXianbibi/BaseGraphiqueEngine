/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   windows_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:59:12 by justinmorne       #+#    #+#             */
/*   Updated: 2023/03/16 22:08:17 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../include/graphic_engine.h"

bool init_win( void )
{
    t_data * data = getData();
    
    if (SDL_Init(SDL_INIT_EVERYTHING))
    {
        perror("ERROR WINDOW INIT "); 
        return (FAIL);
    }
    data->win = SDL_CreateWindow("B3D", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH_WIN, HEIGHT_WIN, 0);
    if (!data->win)
    {
        perror("ERROR WIN INIT ");
        return (FAIL);
    }
    data->color_buffer = (u_int32_t *)calloc(sizeof(u_int32_t), HEIGHT_WIN * WIDTH_WIN);
    if (!data->color_buffer)
    {
        perror("ERROR MALLO ");
        return (FAIL);   
    }
    data->renderer = SDL_CreateRenderer(data->win, -1, 0);
    if (!data->renderer)
    {
        perror("ERROR RENDERER INIT ");
        return (FAIL);
    }
    return (SUCCESS);
}

