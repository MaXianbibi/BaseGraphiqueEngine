/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_win.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:06:55 by justinmorne       #+#    #+#             */
/*   Updated: 2023/03/16 22:24:14 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../include/graphic_engine.h"

bool loop_win ( void )
{
    GATA
    
    while (data->is_running)
    {
        process_input();
        render_win();
    }
    return (SUCCESS);
}