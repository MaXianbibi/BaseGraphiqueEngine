/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_graphic_engine.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:48:31 by jmorneau          #+#    #+#             */
/*   Updated: 2023/03/17 21:29:50 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_GRAPHIC_ENGINE_H
# define S_GRAPHIC_ENGINE_H

#include "graphic_engine.h"
# include <SDL2/SDL.h>





typedef struct 
{
    float x;
    float y;
} vec2_t;

typedef struct 
{
    float x;
    float y;
    float z;
} vec3_t;

typedef struct 
{
    vec3_t pos;
    vec3_t rotation;
    float fov_angle;
} camera_t;

struct mesh_s
{
    vec2_t           * projection;
    vec3_t           * mesh;

    vec3_t          pos;
    
   struct mesh_s     * next;
}; typedef struct mesh_s mesh_t;

struct s_data
{
    camera_t            camera;
    
    SDL_Window 		    *win;
    SDL_Renderer 	    *renderer;
    u_int32_t           *color_buffer;
    SDL_Texture         *color_buffer_texture;


    mesh_t              * head;


    
    u_int32_t           w_win;
    u_int32_t           h_win;
    u_int32_t           n_pixel;
    
    bool				is_running;	
};
typedef struct s_data	t_data;




#endif