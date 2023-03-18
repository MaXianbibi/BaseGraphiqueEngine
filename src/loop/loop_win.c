/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_win.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:06:55 by justinmorne       #+#    #+#             */
/*   Updated: 2023/03/17 21:34:05 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graphic_engine.h"

void update()
{
    GATA
    mesh_t * tmp = data->head;
    
    while (tmp)
    {
        for (u_int32_t j = 0; j < N_POINTS; j++)
            tmp->projection[j] = project(tmp->mesh[j]);
        tmp = tmp->next;
    }
}

bool loop_win(void)
{
    GATA
        render_cube();
    while (data->is_running)
    {
        process_input();
        render_win();
        update();
        SDL_Delay(1000 / 60);
    }
    return (SUCCESS);
}