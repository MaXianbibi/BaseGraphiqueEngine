/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_graphic_engine.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:48:41 by jmorneau          #+#    #+#             */
/*   Updated: 2023/03/17 21:24:04 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_GRAPHIC_ENGINE_H
# define P_GRAPHIC_ENGINE_H

#include "s_graphic_engine.h"

bool    init_win( void );
t_data  * getData( void );
void    freeData( void );
bool    loop_win ( void );
void    process_input( void );
void    render_win( void );
void    clear_color_buffer ( u_int32_t color);
void    ft_exit(uint32_t n);
void    ft_error ( char * error_msg );
void    drawPixel(u_int32_t y, u_int32_t x, u_int32_t color);
void drawRecrangle(u_int32_t posX, u_int32_t posY, u_int32_t w, u_int32_t h, u_int32_t color);
void render_color_buffer ( void );
mesh_t *    creat_new_mesh( void );
void        insert_at_head(mesh_t **head, mesh_t *node_to_insert);

void update();
// render mesh

void render_cube( void );
vec2_t project(vec3_t point);

#endif