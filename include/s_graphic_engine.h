/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_graphic_engine.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:48:31 by jmorneau          #+#    #+#             */
/*   Updated: 2023/03/17 14:01:12 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_GRAPHIC_ENGINE_H
# define S_GRAPHIC_ENGINE_H

#include "graphic_engine.h"
# include <SDL2/SDL.h>

struct s_data
{
    SDL_Window 		    *win;
    SDL_Renderer 	    *renderer;
    SDL_Texture         *color_buffer_texture;
    u_int32_t           *color_buffer;

    u_int32_t           w_win;
    u_int32_t           h_win;
    u_int32_t           n_pixel;
    
    bool				is_running;	
};
typedef struct s_data	t_data;



#endif