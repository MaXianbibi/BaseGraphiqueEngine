/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_graphic_engine.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:48:31 by jmorneau          #+#    #+#             */
/*   Updated: 2023/03/16 22:05:50 by justinmorne      ###   ########.fr       */
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
    u_int32_t           *color_buffer;
    bool				is_running;	
};
typedef struct s_data	t_data;



#endif