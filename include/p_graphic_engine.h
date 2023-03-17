/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_graphic_engine.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:48:41 by jmorneau          #+#    #+#             */
/*   Updated: 2023/03/16 18:27:01 by justinmorne      ###   ########.fr       */
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

#endif