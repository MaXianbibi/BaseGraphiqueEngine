/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_graphic_engine.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:48:41 by jmorneau          #+#    #+#             */
/*   Updated: 2023/03/17 13:49:21 by justinmorne      ###   ########.fr       */
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


#endif