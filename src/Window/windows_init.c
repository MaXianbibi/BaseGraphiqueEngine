/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   windows_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:59:12 by justinmorne       #+#    #+#             */
/*   Updated: 2023/03/17 13:43:34 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../include/graphic_engine.h"

bool init_win( void )
{
    t_data * data = getData();
    
    if (SDL_Init(SDL_INIT_EVERYTHING))
        ft_error();
    data->win = SDL_CreateWindow("B3D", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH_WIN, HEIGHT_WIN, 0);
    if (!data->win)
        ft_error();
    data->color_buffer = (u_int32_t *)calloc(sizeof(u_int32_t), N_PIXEL);
    if (!data->color_buffer)
    {
        perror("ERROR MALLOC ");
        return (FAIL);   
    }
    data->renderer = SDL_CreateRenderer(data->win, -1, 0);
    if (!data->renderer)
        ft_error();
    return (SUCCESS);
}

